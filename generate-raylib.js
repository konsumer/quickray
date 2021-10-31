// this will generate quickray.c from current API
// run with ./lib/quickjs/qjs generate-raylib.js lib/raylib/parser/raylib_api.json > quickray.c

/* global scriptArgs */

import { loadFile } from 'std'

const { enums, structs, functions } = JSON.parse(loadFile(scriptArgs[1]))

// helper to simplify output-types
const call = func => `${func.name}(${Object.keys(func.params || {}).join(', ')})`

// how do I convert this input to js-wrapper C?
const inputTypes = {
  AudioStream: () => [],
  BoundingBox: () => [],
  Camera: () => [],
  'Camera *': () => [],
  Camera2D: () => [],
  Camera3D: () => [],
  'CharInfo *': () => [],

  Color: (p, i) => [
    `Color ${p} = BLACK;`,
    `int ${p}Int;`,
    `if (JS_IsNumber(argv[${i}])) {`,
    `  if (JS_ToInt32(ctx, &${p}Int, argv[$1])) {`,
    `    ${p} = GetColor(${p}Int);`,
    '  } else {',
    `    return JS_Throw(ctx, JS_NewString(ctx, "Bad Color value for ${p}"));`,
    '  }',
    `} else if (JS_IsObject(argv[${i}])){`,
    `  ${p} = *(Color*)JS_GetOpaque2(ctx, argv[${i}], wrapper_struct_Color_class_id);`,
    '}'
  ],

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
    `if (${p} == NULL) return JS_EXCEPTION;`
  ],

  'char *': (p, i) => [
    `const char ${p} = NULL;`,
    `${p} = JS_ToCString(ctx, argv[${i}]);`,
    `if (${p} == NULL) return JS_EXCEPTION;`
  ],

  'const CharInfo *': () => [],

  'const char *': (p, i) => [
    `const char ${p} = NULL;`,
    `${p} = JS_ToCString(ctx, argv[${i}]);`,
    `if (${p} == NULL) return JS_EXCEPTION;`
  ],

  'const char **': (p, i) => [
    `const char ${p} = NULL;`,
    `${p} = JS_ToCString(ctx, argv[${i}]);`,
    `if (${p} == NULL) return JS_EXCEPTION;`
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

  'char *': () => [
    `return JS_NewString(ctx, &${call(m)});`
  ],

  'char **': () => [
    `return JS_NewString(ctx, &${call(m)});`
  ],

  'const char *': () => [
    `return JS_NewString(ctx, &${call(m)});`
  ],

  'const char **': () => [
    `return JS_NewString(ctx, &${call(m)});`
  ],

  double: () => [
    `return JS_NewFloat64(ctx, ${call(m)});`
  ],

  float: m => [
    `return JS_NewFloat64(ctx, ${call(m)});`
  ],

  'float *': m => [
    `return JS_NewFloat64(ctx, &${call(m)});`
  ],

  int: m => [
    `return JS_NewInt32(ctx, ${call(m)});`
  ],

  'int *': () => [
    `return JS_NewInt32(ctx, &${call(m)});`
  ],

  long: () => [
    `return JS_NewFloat64(ctx, ${call(m)});`
  ],

  'unsigned char *': () => [
    `return JS_NewString(ctx, &${call(m)});`
  ],

  'unsigned int': () => [
    `return JS_NewInt32(ctx, ${call(m)});`
  ],

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
  }).filter(f => f).join('\n  ')}

  ${outputTypes[method.returnType](method).join('\n  ')}
}
`).join('\n  ').replace(/ {2}\n/g, '')

const liststring = functions
  .map(method => `  JS_CFUNC_DEF("${method.name}", ${Object.values(method.params || {}).length}, wrapped_${method.name})`)
  .join(',\n') +
  ',\n  ' + enums
  .map(ea => ea.values.map(v => v.name))
  .reduce((a, v) => [...a, ...v], [])
  .map(e => `JS_PROP_INT32_DEF("${e}", ${e}, JS_PROP_CONFIGURABLE )`)
  .join(',\n  ')

const out = `// This was auto-generated. Run qjs generate-raylib.js
#include "stdio.h"
#include "string.h"
#include "quickjs/quickjs.h"
#include "quickjs/cutils.h"
#include "raylib.h"

#define JS_ATOM_length 48

${fstring}

static const JSCFunctionListEntry raylib_exported_interface[] = {
${liststring}
};

static int js_rl_init(JSContext* ctx, JSModuleDef* m) {
  js_rl_init_classes(ctx, m);
  return JS_SetModuleExportList(ctx, m, raylib_exported_interface, countof(raylib_exported_interface));
}

JSModuleDef* js_init_module(JSContext* ctx, const char* module_name) {
  JSModuleDef* m = JS_NewCModule(ctx, module_name, js_rl_init);
  if (!m) return NULL;
  JS_AddModuleExportList(ctx, m, raylib_exported_interface, countof(raylib_exported_interface));
  js_rl_init_module_classes(ctx, m);
  return m;
}`
console.log(out)
