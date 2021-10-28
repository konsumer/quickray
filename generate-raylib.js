// this will generate quickray.c from current API
// run with ./lib/quickjs/qjs generate-raylib.js
import { loadFile } from 'std'

const { enums, structs, functions } = JSON.parse(loadFile('lib/raylib/parser/raylib_api.json'))

// simple helper to simplify output-types
const call = func => `${func.name}(${Object.values(func.params || {}).join(', ')})`

// I outputted the names like this:
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
  bool: () => [],
  char: () => [],
  'char *': () => [],
  'const CharInfo *': () => [],
  'const char *': () => [],
  'const char **': () => [],
  'const unsigned char *': () => [],
  'const void *': () => [],
  float: () => [],
  'float *': () => [],
  int: () => [],
  'int *': () => [],
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
  bool: m => [`return JS_NewBool(ctx, ${call(m)});`],
  'char *': () => [],
  'char **': () => [],
  'const char *': () => [],
  'const char **': () => [],
  double: () => [],
  float: m => [`return JS_NewFloat64(ctx, ${call(m)});`],
  'float *': m => [`return JS_NewFloat64(ctx, &${call(m)});`],
  int: () => [],
  'int *': () => [],
  long: () => [],
  'unsigned char *': () => [],
  'unsigned int': () => [],
  void: () => [],
  'void *': () => []
}
