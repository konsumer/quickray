import { loadFile } from 'std'

// this is the file to search for API functions
const HEADER = '/usr/local/include/raylib.h'

const regexes = {
  func: /^RLAPI ([*A-Za-z0-9 ]+) ([*A-Za-z0-9]+)\((.+)\);\W+(.+)/gm
}

// get info about all the methods
function getMethods (source) {
  const out = []
  let m
  m = regexes.func.exec(source)
  while ((m = regexes.func.exec(source))) {
    if (m.index === regexes.func.lastIndex) {
      regexes.func.lastIndex++
    }
    const n = {
      returns: m[1],
      name: m[2],
      params: (m[3] || 'void').split(',').map(s => {
        const p = s.split(' ')
        let type = p.slice(0, -1).join(' ').trim()
        let name = p.pop().replace(/[*&]/g, '').trim()
        if (name === 'void') {
          type = 'void'
          name = undefined
        }
        return {
          type,
          name
        }
      }),
      comment: m[4]
    }
    if (n.name[0] === '*') {
      n.type = n.tyle + '*'
      n.name = n.name.substr(1)
    }
    out.push(n)
  }
  return out
}

// output the setup for the params
function getParams (method, indent = 2) {
  return method.params.map(p => {

  }).join('\n')
}

// output the actual call to original function
function getCall (method, indent = 2) {
  if (method.returns === 'void') {
    return `
  ${method.name}(${method.params.map(p => p.name).join(', ')});
  return JS_UNDEFINED;
`
  }
}

// wrap them all with JS_CFUNC_DEF
function getJSCFunctionListEntry (method) {
  return `// ${method.comment}\n  JS_CFUNC_DEF("${method.name}", ${method.params.filter(p => p.type !== 'void').length}, wrapped_${method.name})`
}

const methods = getMethods(loadFile(HEADER))

const out = `// This was auto-generated. Run qjs generate-raylib.js

#include "stdio.h"
#include "string.h"

#include "quickjs/quickjs.h"
#include "quickjs/cutils.h"
#include "raylib.h"

#define JS_ATOM_length 48

// TODO: do structs here

${methods.map(method => `// ${method.comment}
static JSValue wrapped_${method.name}(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ${getParams(method)}
  ${getCall(method)}
}
`).join('\n')}
`

const footer = `
static const JSCFunctionListEntry wrapped_js_funcs[] = {
  ${methods.map(method => getJSCFunctionListEntry(method)).join(',\n\n  ')}
};

static int js_rl_init(JSContext* ctx, JSModuleDef* m) {
  js_rl_init_classes(ctx, m);
  return JS_SetModuleExportList(ctx, m, wrapped_js_funcs, countof(wrapped_js_funcs));
}

JSModuleDef* js_init_module(JSContext* ctx, const char* module_name) {
  JSModuleDef* m;
  m = JS_NewCModule(ctx, module_name, js_rl_init);
  if (!m) return NULL;
  JS_AddModuleExportList(ctx, m, wrapped_js_funcs, countof(wrapped_js_funcs));
  js_rl_init_module_classes(ctx, m);
  return m;
}
`

console.log(out + footer)
