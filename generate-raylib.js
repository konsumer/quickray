// this will generate quickray.c from current API
// run with ./lib/quickjs/qjs generate-raylib.js

import { loadFile } from 'std'

const { enums, structs, functions } = JSON.parse(loadFile('lib/raylib/parser/raylib_api.json'))

// simple helper to simplify output-types
const call = func => `${func.name}(${Object.keys(func.params || {}).join(', ')})`

// I outputted the input/output names like this:
/*
const inputs = new Set()
const outputs = new Set()
for (const func of functions) {
  for (const o of Object.values(func.params || {})) {
    if (o && o !== '') {
      inputs.add(o)
    } else {
      inputs.add('void')
    }
  }
  outputs.add(func.returnType)
}
console.log(JSON.stringify([...inputs].sort(), null, 2))
console.log(JSON.stringify([...outputs].sort(), null, 2))
*/

// how do I convert this input to js-wrapper C?
const inputTypes = {
  AudioStream: () => [],
  BoundingBox: () => [],
  Camera: () => [],
  'Camera *': () => [],
  Camera2D: () => [],
  Camera3D: () => [],
  'CharInfo *': () => [],
  Color: () => [],
  'Color *': () => [],
  Font: () => [],
  Image: () => [],
  'Image *': () => [],
  LoadFileDataCallback: () => [],
  LoadFileTextCallback: () => [],
  Material: () => [],
  'Material *': () => [],
  Matrix: () => [],
  'Matrix *': () => [],
  Mesh: () => [],
  'Mesh *': () => [],
  Model: () => [],
  'Model *': () => [],
  ModelAnimation: () => [],
  'ModelAnimation*': () => [],
  Music: () => [],
  NPatchInfo: () => [],
  Ray: () => [],
  Rectangle: () => [],
  'Rectangle **': () => [],
  RenderTexture2D: () => [],
  SaveFileDataCallback: () => [],
  SaveFileTextCallback: () => [],
  Shader: () => [],
  Sound: () => [],
  Texture2D: () => [],
  'Texture2D *': () => [],
  TraceLogCallback: () => [],
  Vector2: () => [],
  'Vector2 *': () => [],
  Vector3: () => [],
  'Vector3 *': () => [],
  Vector4: () => [],
  VrDeviceInfo: () => [],
  VrStereoConfig: () => [],
  Wave: () => [],
  'Wave *': () => [],

  bool: (p, i) => [
    `bool ${p} = JS_ToBool(ctx, argv[${i}]);`
  ],

  char: (p, i) => [
    `const char ${p} = NULL;`,
    `${p} = JS_ToCString(ctx, argv[${i}]);`,
    'if (title == NULL) return JS_EXCEPTION;'
  ],

  'char *': (p, i) => [
    `const char ${p} = NULL;`,
    `${p} = JS_ToCString(ctx, argv[${i}]);`,
    'if (title == NULL) return JS_EXCEPTION;'
  ],

  'const CharInfo *': () => [],

  'const char *': (p, i) => [
    `const char ${p} = NULL;`,
    `${p} = JS_ToCString(ctx, argv[${i}]);`,
    'if (title == NULL) return JS_EXCEPTION;'
  ],

  'const char **': (p, i) => [
    `const char ${p} = NULL;`,
    `${p} = JS_ToCString(ctx, argv[${i}]);`,
    'if (title == NULL) return JS_EXCEPTION;'
  ],

  'const unsigned char *': () => [],
  'const void *': () => [],
  float: () => [],
  'float *': () => [],

  int: (p, i) => [
    `int ${p};`,
    `if (JS_ToInt32(ctx, ${p}, argv[${i}])) return JS_EXCEPTION;`
  ],

  'int *': (p, i) => [
    `int ${p};`,
    `if (JS_ToInt32(ctx, ${p}, argv[${i}])) return JS_EXCEPTION;`
  ],

  'unsigned char *': () => [],
  'unsigned int': () => [],
  'unsigned int *': () => [],
  'void *': () => []
}

// How do I convert this output to js-wrapper C?
const outputTypes = {
  AudioStream: () => [],
  BoundingBox: () => [],
  'CharInfo *': () => [],
  Color: () => [],
  'Color *': () => [],
  Font: () => [],
  Image: () => [],
  Material: () => [],
  'Material *': () => [],
  Matrix: () => [],
  Mesh: () => [],
  Model: () => [],
  'ModelAnimation *': () => [],
  Music: () => [],
  Ray: () => [],
  RayCollision: () => [],
  Rectangle: () => [],
  RenderTexture2D: () => [],
  Shader: () => [],
  Sound: () => [],
  Texture2D: () => [],
  TextureCubemap: () => [],
  Vector2: () => [],
  Vector3: () => [],
  Vector4: () => [],
  VrStereoConfig: () => [],
  Wave: () => [],

  bool: m => [
    `return JS_NewBool(ctx, ${call(m)});`
  ],

  'char *': () => [],
  'char **': () => [],
  'const char *': () => [],
  'const char **': () => [],
  double: () => [],

  float: m => [
    `return JS_NewFloat64(ctx, ${call(m)});`
  ],

  'float *': m => [
    `return JS_NewFloat64(ctx, &${call(m)});`
  ],

  int: () => [],
  'int *': () => [],
  long: () => [],
  'unsigned char *': () => [],
  'unsigned int': () => [],

  void: m => [
    `${call(m)};`,
    'return JS_UNDEFINED;'
  ],

  'void *': m => [
    `${call(m)};`,
    'return JS_UNDEFINED;'
  ]
}

const fstring = functions.map(method => `
// ${method.name}: ${method.description}
static JSValue wrapped_${method.name}(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ${Object.keys(method.params || {}).map((p, i) => {
    if (inputTypes[method.params[p]]) {
      return inputTypes[method.params[p]](p, i).join('\n  ')
    } else {
      return false
    }
  }).filter(f => f).join('\n\n  ')}

  ${outputTypes[method.returnType](method).join('\n  ')}
}
`).join('\n  ')

const liststring = functions.map(method => `
  JS_CFUNC_DEF("${method.name}", ${Object.values(method.params || {}).length}, wrapped_${method.name})`
).join(',')

const out = `// This was auto-generated. Run qjs generate-raylib.js
#include "stdio.h"
#include "string.h"
#include "quickjs/quickjs.h"
#include "quickjs/cutils.h"
#include "raylib.h"

#define JS_ATOM_length 48

${fstring}

static const JSCFunctionListEntry wrapped_js_funcs[] = {
  ${liststring}
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
