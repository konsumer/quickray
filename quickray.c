// currently this is hand-generated to work through ideas for generator

#include "quickjs/quickjs.h"
#include "quickjs/cutils.h"
#include "raylib.h"

#define JS_ATOM_length 48

// Initialize window and OpenGL context
static JSValue wrapped_InitWindow(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int w;
  if (JS_ToInt32(ctx, &w, argv[0])) return JS_EXCEPTION;

  int h;
  if (JS_ToInt32(ctx, &h, argv[1])) return JS_EXCEPTION;
  
  const char* title = NULL;
  title = JS_ToCString(ctx, argv[2]);
  if (title == NULL) return JS_EXCEPTION;

  InitWindow(w, h, title);

  return JS_UNDEFINED;
}

static const JSCFunctionListEntry js_rl_funcs[] = {
  JS_CFUNC_DEF("InitWindow", 3, wrapped_InitWindow),
};


static int js_rl_init(JSContext* ctx, JSModuleDef* m) {
  js_rl_init_classes(ctx, m);
  return JS_SetModuleExportList(ctx, m, js_rl_funcs, countof(js_rl_funcs));
}

JSModuleDef* js_init_module(JSContext* ctx, const char* module_name) {
  JSModuleDef* m;
  m = JS_NewCModule(ctx, module_name, js_rl_init);
  
  if (!m) return NULL;
  
  JS_AddModuleExportList(ctx, m, js_rl_funcs, countof(js_rl_funcs));
  js_rl_init_module_classes(ctx, m);

  return m;
}