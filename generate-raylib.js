import { loadFile } from 'std'

const regexes = {
  func: /^RLAPI ([\*A-Za-z0-9 ]+) ([\*A-Za-z0-9]+)\((.+)\);\W+(.+)/gm
}

// TODO: I need a lot more in/out types
// TODO: use lib/raylib/parser/raylib_api.json instead of parsing myself

// map of input-type to function that the function-body to convert it
const inputTypes = {
  AudioStream: (p, i) => '',
  bool: (p, i) => `bool ${p.name} = JS_ToBool(ctx, argv[${i}]);`,
  BoundingBox: (p, i) => '',
  Camera: (p, i) => '',
  Camera2D: (p, i) => '',
  Camera3D: (p, i) => '',
  char: (p, i) => `const char* ${p.name} = NULL;\n  ${p.name} = JS_ToCString(ctx, argv[${i}]);\n  if (title == NULL) return JS_EXCEPTION;`,
  CharInfo: (p, i) => '',
  Color: (p, i) => '',
  'const char': (p, i) => `const char* ${p.name} = NULL;\n  ${p.name} = JS_ToCString(ctx, argv[${i}]);\n  if (title == NULL) return JS_EXCEPTION;`,
  'const CharInfo': (p, i) => '',
  'const unsigned char': (p, i) => '',
  'const void': (p, i) => '',
  float: (p, i) => `double ${p.name};\n  if (JS_ToFloat64(ctx, &${p.name}, argv[${i}])) return JS_EXCEPTION;`,
  Font: (p, i) => '',
  Image: (p, i) => '',
  int: (p, i) => `int ${p.name};\n  if (JS_ToInt32(ctx, &${p.name}, argv[${i}])) return JS_EXCEPTION;`,
  LoadFileDataCallback: (p, i) => '',
  LoadFileTextCallback: (p, i) => '',
  Material: (p, i) => '',
  Matrix: (p, i) => '',
  Mesh: (p, i) => '',
  Model: (p, i) => '',
  ModelAnimation: (p, i) => '',
  Music: (p, i) => '',
  NPatchInfo: (p, i) => '',
  Ray: (p, i) => '',
  Rectangle: (p, i) => '',
  RenderTexture2D: (p, i) => '',
  SaveFileDataCallback: (p, i) => '',
  SaveFileTextCallback: (p, i) => '',
  Shader: (p, i) => '',
  Sound: (p, i) => '',
  Texture2D: (p, i) => '',
  TraceLogCallback: (p, i) => '',
  'unsigned char': (p, i) => `int _${p.name};\n  if (JS_ToInt32(ctx, &_${p.name}, argv[${i}])) return JS_EXCEPTION;\n  unsigned char ${p.name} = (unsigned char) _${p.name};`,
  'unsigned int': (p, i) => `unsigned int ${p.name};\n  if (JS_ToUint32(ctx, &${p.name}, argv[${i}])) return JS_EXCEPTION;`,
  Vector2: (p, i) => '',
  Vector3: (p, i) => '',
  Vector4: (p, i) => '',
  void: (p, i) => '',
  VrDeviceInfo: (p, i) => '',
  VrStereoConfig: (p, i) => '',
  Wave: (p, i) => ''
}

// return just the call-string: basically just a util to simplify outputTypes
function call (method) {
  const params = method.input.map(p => p.name)
  return `${method.name}(${params.join(', ')})`
}

// map of output-type to function that generates return portion of function-body
const outputTypes = {
  AudioStream: m => '',
  bool: m => `return JS_NewBool(ctx, ${call(m)});`,
  BoundingBox: m => '',
  char: m => '',
  CharInfo: m => '',
  Color: m => '',
  'const char': m => `return JS_NewString(ctx, ${call(m)});`,
  double: m => '',
  float: m => `return JS_NewFloat64(ctx, ${call(m)});`,
  Font: m => '',
  Image: m => '',
  int: m => `return JS_NewInt32(ctx, ${call(m)});`,
  long: m => '',
  Material: m => '',
  Matrix: m => '',
  Mesh: m => '',
  Model: m => '',
  ModelAnimation: m => '',
  Music: m => '',
  Ray: m => '',
  RayHitInfo: m => '',
  Rectangle: m => '',
  RenderTexture2D: m => '',
  Shader: m => '',
  Sound: m => '',
  Texture2D: m => '',
  TextureCubemap: m => '',
  'unsigned char': m => '',
  'unsigned int': m => '',
  Vector2: m => '',
  Vector3: m => '',
  Vector4: m => '',
  void: m => `${call(m)};\n  return JS_UNDEFINED;`,
  VrStereoConfig: m => '',
  Wave: m => ''
}

// get info from raylib header
function getInfo (source) {
  const functions = []
  let m
  while (m = regexes.func.exec(source)) {
    const input = m[3]
      .split(',')
      .map(s => s.trim())
      .map(s => {
        const pointer = s.includes('*')
        if (pointer) {
          s = s.replace(/\*/g, '')
        }
        const p = s.split(' ')
        const l = p.length - 1
        let type = p.slice(0, l).join(' ').trim()
        if (type === '') {
          type = 'void'
        }
        return {
          name: p[l],
          type,
          pointer
        }
      })

    const n = {
      output: m[1],
      name: m[2],
      input,
      comment: m[4]
    }
    functions.push(n)

    // console.log(JSON.stringify(n, null, 2))
  }
  return { functions }
}

const { functions } = getInfo(loadFile('/usr/local/include/raylib.h'))

const out = `// This was auto-generated. Run qjs generate-raylib.js

#include "stdio.h"
#include "string.h"

#include "quickjs/quickjs.h"
#include "quickjs/cutils.h"
#include "raylib.h"

#define JS_ATOM_length 48


${functions.map(method => `
// ${method.comment}
static JSValue wrapped_${method.name}(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ${method.input.map((m, i) => inputTypes[m.type](m, i)).filter(m => m !== '').join('\n  ') + `\n  ${outputTypes[method.output](method)}`}
}`).join('\n')}

static const JSCFunctionListEntry wrapped_js_funcs[] = {
  ${functions.map(method => `JS_CFUNC_DEF("${method.name}", ${method.input.filter(p => p.type !== 'void').length}, wrapped_${method.name})`).join(',\n  ')}
};

static int js_rl_init(JSContext* ctx, JSModuleDef* m) {
  js_rl_init_classes(ctx, m);
  return JS_SetModuleExportList(ctx, m, wrapped_js_funcs, countof(wrapped_js_funcs));
}

JSModuleDef* js_init_module(JSContext* ctx, const char* module_name) {
  JSModuleDef* m = JS_NewCModule(ctx, module_name, js_rl_init);
  if (!m) return NULL;
  JS_AddModuleExportList(ctx, m, wrapped_js_funcs, countof(wrapped_js_funcs));
  js_rl_init_module_classes(ctx, m);
  return m;
}`
console.log(out)
