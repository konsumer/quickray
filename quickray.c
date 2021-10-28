// This was auto-generated. Run qjs generate-raylib.js
#include "stdio.h"
#include "string.h"
#include "quickjs/quickjs.h"
#include "quickjs/cutils.h"
#include "raylib.h"

#define JS_ATOM_length 48


// InitWindow: Initialize window and OpenGL context
static JSValue wrapped_InitWindow(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;
  const char title = NULL;
  title = JS_ToCString(ctx, argv[2]);
  if (title == NULL) return JS_EXCEPTION;

  InitWindow(width, height, title);
  return JS_UNDEFINED;
}

// WindowShouldClose: Check if KEY_ESCAPE pressed or Close icon pressed
static JSValue wrapped_WindowShouldClose(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, WindowShouldClose());
}

// CloseWindow: Close window and unload OpenGL context
static JSValue wrapped_CloseWindow(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  CloseWindow();
  return JS_UNDEFINED;
}

// IsWindowReady: Check if window has been initialized successfully
static JSValue wrapped_IsWindowReady(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowReady());
}

// IsWindowFullscreen: Check if window is currently fullscreen
static JSValue wrapped_IsWindowFullscreen(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowFullscreen());
}

// IsWindowHidden: Check if window is currently hidden (only PLATFORM_DESKTOP)
static JSValue wrapped_IsWindowHidden(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowHidden());
}

// IsWindowMinimized: Check if window is currently minimized (only PLATFORM_DESKTOP)
static JSValue wrapped_IsWindowMinimized(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowMinimized());
}

// IsWindowMaximized: Check if window is currently maximized (only PLATFORM_DESKTOP)
static JSValue wrapped_IsWindowMaximized(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowMaximized());
}

// IsWindowFocused: Check if window is currently focused (only PLATFORM_DESKTOP)
static JSValue wrapped_IsWindowFocused(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowFocused());
}

// IsWindowResized: Check if window has been resized last frame
static JSValue wrapped_IsWindowResized(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowResized());
}

// IsWindowState: Check if one specific window flag is enabled
static JSValue wrapped_IsWindowState(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsWindowState(flag));
}

// SetWindowState: Set window configuration state using flags
static JSValue wrapped_SetWindowState(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetWindowState(flags);
  return JS_UNDEFINED;
}

// ClearWindowState: Clear window configuration state flags
static JSValue wrapped_ClearWindowState(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ClearWindowState(flags);
  return JS_UNDEFINED;
}

// ToggleFullscreen: Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
static JSValue wrapped_ToggleFullscreen(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ToggleFullscreen();
  return JS_UNDEFINED;
}

// MaximizeWindow: Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
static JSValue wrapped_MaximizeWindow(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  MaximizeWindow();
  return JS_UNDEFINED;
}

// MinimizeWindow: Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
static JSValue wrapped_MinimizeWindow(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  MinimizeWindow();
  return JS_UNDEFINED;
}

// RestoreWindow: Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
static JSValue wrapped_RestoreWindow(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  RestoreWindow();
  return JS_UNDEFINED;
}

// SetWindowIcon: Set icon for window (only PLATFORM_DESKTOP)
static JSValue wrapped_SetWindowIcon(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetWindowIcon(image);
  return JS_UNDEFINED;
}

// SetWindowTitle: Set title for window (only PLATFORM_DESKTOP)
static JSValue wrapped_SetWindowTitle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char title = NULL;
  title = JS_ToCString(ctx, argv[0]);
  if (title == NULL) return JS_EXCEPTION;

  SetWindowTitle(title);
  return JS_UNDEFINED;
}

// SetWindowPosition: Set window position on screen (only PLATFORM_DESKTOP)
static JSValue wrapped_SetWindowPosition(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int x;
  if (JS_ToInt32(ctx, x, argv[0])) return JS_EXCEPTION;
  int y;
  if (JS_ToInt32(ctx, y, argv[1])) return JS_EXCEPTION;

  SetWindowPosition(x, y);
  return JS_UNDEFINED;
}

// SetWindowMonitor: Set monitor for the current window (fullscreen mode)
static JSValue wrapped_SetWindowMonitor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

  SetWindowMonitor(monitor);
  return JS_UNDEFINED;
}

// SetWindowMinSize: Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
static JSValue wrapped_SetWindowMinSize(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

  SetWindowMinSize(width, height);
  return JS_UNDEFINED;
}

// SetWindowSize: Set window dimensions
static JSValue wrapped_SetWindowSize(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

  SetWindowSize(width, height);
  return JS_UNDEFINED;
}

// GetWindowHandle: Get native window handle
static JSValue wrapped_GetWindowHandle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  GetWindowHandle();
  return JS_UNDEFINED;
}

// GetScreenWidth: Get current screen width
static JSValue wrapped_GetScreenWidth(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetScreenHeight: Get current screen height
static JSValue wrapped_GetScreenHeight(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetMonitorCount: Get number of connected monitors
static JSValue wrapped_GetMonitorCount(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetCurrentMonitor: Get current connected monitor
static JSValue wrapped_GetCurrentMonitor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetMonitorPosition: Get specified monitor position
static JSValue wrapped_GetMonitorPosition(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

}

// GetMonitorWidth: Get specified monitor width (max available by monitor)
static JSValue wrapped_GetMonitorWidth(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

}

// GetMonitorHeight: Get specified monitor height (max available by monitor)
static JSValue wrapped_GetMonitorHeight(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

}

// GetMonitorPhysicalWidth: Get specified monitor physical width in millimetres
static JSValue wrapped_GetMonitorPhysicalWidth(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

}

// GetMonitorPhysicalHeight: Get specified monitor physical height in millimetres
static JSValue wrapped_GetMonitorPhysicalHeight(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

}

// GetMonitorRefreshRate: Get specified monitor refresh rate
static JSValue wrapped_GetMonitorRefreshRate(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

}

// GetWindowPosition: Get window position XY on monitor
static JSValue wrapped_GetWindowPosition(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetWindowScaleDPI: Get window scale DPI factor
static JSValue wrapped_GetWindowScaleDPI(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetMonitorName: Get the human-readable, UTF-8 encoded name of the primary monitor
static JSValue wrapped_GetMonitorName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int monitor;
  if (JS_ToInt32(ctx, monitor, argv[0])) return JS_EXCEPTION;

}

// SetClipboardText: Set clipboard text content
static JSValue wrapped_SetClipboardText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

  SetClipboardText(text);
  return JS_UNDEFINED;
}

// GetClipboardText: Get clipboard text content
static JSValue wrapped_GetClipboardText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ShowCursor: Shows cursor
static JSValue wrapped_ShowCursor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ShowCursor();
  return JS_UNDEFINED;
}

// HideCursor: Hides cursor
static JSValue wrapped_HideCursor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  HideCursor();
  return JS_UNDEFINED;
}

// IsCursorHidden: Check if cursor is not visible
static JSValue wrapped_IsCursorHidden(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsCursorHidden());
}

// EnableCursor: Enables cursor (unlock cursor)
static JSValue wrapped_EnableCursor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EnableCursor();
  return JS_UNDEFINED;
}

// DisableCursor: Disables cursor (lock cursor)
static JSValue wrapped_DisableCursor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DisableCursor();
  return JS_UNDEFINED;
}

// IsCursorOnScreen: Check if cursor is on the screen
static JSValue wrapped_IsCursorOnScreen(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsCursorOnScreen());
}

// ClearBackground: Set background color (framebuffer clear color)
static JSValue wrapped_ClearBackground(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ClearBackground(color);
  return JS_UNDEFINED;
}

// BeginDrawing: Setup canvas (framebuffer) to start drawing
static JSValue wrapped_BeginDrawing(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  BeginDrawing();
  return JS_UNDEFINED;
}

// EndDrawing: End canvas drawing and swap buffers (double buffering)
static JSValue wrapped_EndDrawing(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndDrawing();
  return JS_UNDEFINED;
}

// BeginMode2D: Begin 2D mode with custom camera (2D)
static JSValue wrapped_BeginMode2D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  BeginMode2D(camera);
  return JS_UNDEFINED;
}

// EndMode2D: Ends 2D mode with custom camera
static JSValue wrapped_EndMode2D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndMode2D();
  return JS_UNDEFINED;
}

// BeginMode3D: Begin 3D mode with custom camera (3D)
static JSValue wrapped_BeginMode3D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  BeginMode3D(camera);
  return JS_UNDEFINED;
}

// EndMode3D: Ends 3D mode and returns to default 2D orthographic mode
static JSValue wrapped_EndMode3D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndMode3D();
  return JS_UNDEFINED;
}

// BeginTextureMode: Begin drawing to render texture
static JSValue wrapped_BeginTextureMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  BeginTextureMode(target);
  return JS_UNDEFINED;
}

// EndTextureMode: Ends drawing to render texture
static JSValue wrapped_EndTextureMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndTextureMode();
  return JS_UNDEFINED;
}

// BeginShaderMode: Begin custom shader drawing
static JSValue wrapped_BeginShaderMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  BeginShaderMode(shader);
  return JS_UNDEFINED;
}

// EndShaderMode: End custom shader drawing (use default shader)
static JSValue wrapped_EndShaderMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndShaderMode();
  return JS_UNDEFINED;
}

// BeginBlendMode: Begin blending mode (alpha, additive, multiplied, subtract, custom)
static JSValue wrapped_BeginBlendMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int mode;
  if (JS_ToInt32(ctx, mode, argv[0])) return JS_EXCEPTION;

  BeginBlendMode(mode);
  return JS_UNDEFINED;
}

// EndBlendMode: End blending mode (reset to default: alpha blending)
static JSValue wrapped_EndBlendMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndBlendMode();
  return JS_UNDEFINED;
}

// BeginScissorMode: Begin scissor mode (define screen area for following drawing)
static JSValue wrapped_BeginScissorMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int x;
  if (JS_ToInt32(ctx, x, argv[0])) return JS_EXCEPTION;
  int y;
  if (JS_ToInt32(ctx, y, argv[1])) return JS_EXCEPTION;
  int width;
  if (JS_ToInt32(ctx, width, argv[2])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[3])) return JS_EXCEPTION;

  BeginScissorMode(x, y, width, height);
  return JS_UNDEFINED;
}

// EndScissorMode: End scissor mode
static JSValue wrapped_EndScissorMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndScissorMode();
  return JS_UNDEFINED;
}

// BeginVrStereoMode: Begin stereo rendering (requires VR simulator)
static JSValue wrapped_BeginVrStereoMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  BeginVrStereoMode(config);
  return JS_UNDEFINED;
}

// EndVrStereoMode: End stereo rendering (requires VR simulator)
static JSValue wrapped_EndVrStereoMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  EndVrStereoMode();
  return JS_UNDEFINED;
}

// LoadVrStereoConfig: Load VR stereo config for VR simulator device parameters
static JSValue wrapped_LoadVrStereoConfig(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// UnloadVrStereoConfig: Unload VR stereo config
static JSValue wrapped_UnloadVrStereoConfig(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadVrStereoConfig(config);
  return JS_UNDEFINED;
}

// LoadShader: Load shader from files and bind default locations
static JSValue wrapped_LoadShader(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char vsFileName = NULL;
  vsFileName = JS_ToCString(ctx, argv[0]);
  if (vsFileName == NULL) return JS_EXCEPTION;
  const char fsFileName = NULL;
  fsFileName = JS_ToCString(ctx, argv[1]);
  if (fsFileName == NULL) return JS_EXCEPTION;

}

// LoadShaderFromMemory: Load shader from code strings and bind default locations
static JSValue wrapped_LoadShaderFromMemory(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char vsCode = NULL;
  vsCode = JS_ToCString(ctx, argv[0]);
  if (vsCode == NULL) return JS_EXCEPTION;
  const char fsCode = NULL;
  fsCode = JS_ToCString(ctx, argv[1]);
  if (fsCode == NULL) return JS_EXCEPTION;

}

// GetShaderLocation: Get shader uniform location
static JSValue wrapped_GetShaderLocation(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char uniformName = NULL;
  uniformName = JS_ToCString(ctx, argv[1]);
  if (uniformName == NULL) return JS_EXCEPTION;

}

// GetShaderLocationAttrib: Get shader attribute location
static JSValue wrapped_GetShaderLocationAttrib(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char attribName = NULL;
  attribName = JS_ToCString(ctx, argv[1]);
  if (attribName == NULL) return JS_EXCEPTION;

}

// SetShaderValue: Set shader uniform value
static JSValue wrapped_SetShaderValue(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int locIndex;
  if (JS_ToInt32(ctx, locIndex, argv[1])) return JS_EXCEPTION;
  int uniformType;
  if (JS_ToInt32(ctx, uniformType, argv[3])) return JS_EXCEPTION;

  SetShaderValue(shader, locIndex, value, uniformType);
  return JS_UNDEFINED;
}

// SetShaderValueV: Set shader uniform value vector
static JSValue wrapped_SetShaderValueV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int locIndex;
  if (JS_ToInt32(ctx, locIndex, argv[1])) return JS_EXCEPTION;
  int uniformType;
  if (JS_ToInt32(ctx, uniformType, argv[3])) return JS_EXCEPTION;
  int count;
  if (JS_ToInt32(ctx, count, argv[4])) return JS_EXCEPTION;

  SetShaderValueV(shader, locIndex, value, uniformType, count);
  return JS_UNDEFINED;
}

// SetShaderValueMatrix: Set shader uniform value (matrix 4x4)
static JSValue wrapped_SetShaderValueMatrix(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int locIndex;
  if (JS_ToInt32(ctx, locIndex, argv[1])) return JS_EXCEPTION;

  SetShaderValueMatrix(shader, locIndex, mat);
  return JS_UNDEFINED;
}

// SetShaderValueTexture: Set shader uniform value for texture (sampler2d)
static JSValue wrapped_SetShaderValueTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int locIndex;
  if (JS_ToInt32(ctx, locIndex, argv[1])) return JS_EXCEPTION;

  SetShaderValueTexture(shader, locIndex, texture);
  return JS_UNDEFINED;
}

// UnloadShader: Unload shader from GPU memory (VRAM)
static JSValue wrapped_UnloadShader(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadShader(shader);
  return JS_UNDEFINED;
}

// GetMouseRay: Get a ray trace from mouse position
static JSValue wrapped_GetMouseRay(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetCameraMatrix: Get camera transform matrix (view matrix)
static JSValue wrapped_GetCameraMatrix(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetCameraMatrix2D: Get camera 2d transform matrix
static JSValue wrapped_GetCameraMatrix2D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetWorldToScreen: Get the screen space position for a 3d world space position
static JSValue wrapped_GetWorldToScreen(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetWorldToScreenEx: Get size position for a 3d world space position
static JSValue wrapped_GetWorldToScreenEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[2])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[3])) return JS_EXCEPTION;

}

// GetWorldToScreen2D: Get the screen space position for a 2d camera world space position
static JSValue wrapped_GetWorldToScreen2D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetScreenToWorld2D: Get the world space position for a 2d camera screen space position
static JSValue wrapped_GetScreenToWorld2D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// SetTargetFPS: Set target FPS (maximum)
static JSValue wrapped_SetTargetFPS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int fps;
  if (JS_ToInt32(ctx, fps, argv[0])) return JS_EXCEPTION;

  SetTargetFPS(fps);
  return JS_UNDEFINED;
}

// GetFPS: Get current FPS
static JSValue wrapped_GetFPS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetFrameTime: Get time in seconds for last frame drawn (delta time)
static JSValue wrapped_GetFrameTime(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, GetFrameTime());
}

// GetTime: Get elapsed time in seconds since InitWindow()
static JSValue wrapped_GetTime(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetRandomValue: Get a random value between min and max (both included)
static JSValue wrapped_GetRandomValue(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int min;
  if (JS_ToInt32(ctx, min, argv[0])) return JS_EXCEPTION;
  int max;
  if (JS_ToInt32(ctx, max, argv[1])) return JS_EXCEPTION;

}

// TakeScreenshot: Takes a screenshot of current screen (filename extension defines format)
static JSValue wrapped_TakeScreenshot(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

  TakeScreenshot(fileName);
  return JS_UNDEFINED;
}

// SetConfigFlags: Setup init configuration flags (view FLAGS)
static JSValue wrapped_SetConfigFlags(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetConfigFlags(flags);
  return JS_UNDEFINED;
}

// TraceLog: Show trace log messages (LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR...)
static JSValue wrapped_TraceLog(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int logLevel;
  if (JS_ToInt32(ctx, logLevel, argv[0])) return JS_EXCEPTION;
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;

  TraceLog(logLevel, text, );
  return JS_UNDEFINED;
}

// SetTraceLogLevel: Set the current threshold (minimum) log level
static JSValue wrapped_SetTraceLogLevel(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int logLevel;
  if (JS_ToInt32(ctx, logLevel, argv[0])) return JS_EXCEPTION;

  SetTraceLogLevel(logLevel);
  return JS_UNDEFINED;
}

// MemAlloc: Internal memory allocator
static JSValue wrapped_MemAlloc(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int size;
  if (JS_ToInt32(ctx, size, argv[0])) return JS_EXCEPTION;

  MemAlloc(size);
  return JS_UNDEFINED;
}

// MemRealloc: Internal memory reallocator
static JSValue wrapped_MemRealloc(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int size;
  if (JS_ToInt32(ctx, size, argv[1])) return JS_EXCEPTION;

  MemRealloc(ptr, size);
  return JS_UNDEFINED;
}

// MemFree: Internal memory free
static JSValue wrapped_MemFree(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  MemFree(ptr);
  return JS_UNDEFINED;
}

// SetTraceLogCallback: Set custom trace log
static JSValue wrapped_SetTraceLogCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetTraceLogCallback(callback);
  return JS_UNDEFINED;
}

// SetLoadFileDataCallback: Set custom file binary data loader
static JSValue wrapped_SetLoadFileDataCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetLoadFileDataCallback(callback);
  return JS_UNDEFINED;
}

// SetSaveFileDataCallback: Set custom file binary data saver
static JSValue wrapped_SetSaveFileDataCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetSaveFileDataCallback(callback);
  return JS_UNDEFINED;
}

// SetLoadFileTextCallback: Set custom file text data loader
static JSValue wrapped_SetLoadFileTextCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetLoadFileTextCallback(callback);
  return JS_UNDEFINED;
}

// SetSaveFileTextCallback: Set custom file text data saver
static JSValue wrapped_SetSaveFileTextCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetSaveFileTextCallback(callback);
  return JS_UNDEFINED;
}

// LoadFileData: Load file data as byte array (read)
static JSValue wrapped_LoadFileData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// UnloadFileData: Unload file data allocated by LoadFileData()
static JSValue wrapped_UnloadFileData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadFileData(data);
  return JS_UNDEFINED;
}

// SaveFileData: Save data to file from byte array (write), returns true on success
static JSValue wrapped_SaveFileData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, SaveFileData(fileName, data, bytesToWrite));
}

// LoadFileText: Load text data from file (read), returns a ' 0' terminated string
static JSValue wrapped_LoadFileText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// UnloadFileText: Unload file text data allocated by LoadFileText()
static JSValue wrapped_UnloadFileText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

  UnloadFileText(text);
  return JS_UNDEFINED;
}

// SaveFileText: Save text data to file (write), string must be ' 0' terminated, returns true on success
static JSValue wrapped_SaveFileText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, SaveFileText(fileName, text));
}

// FileExists: Check if file exists
static JSValue wrapped_FileExists(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, FileExists(fileName));
}

// DirectoryExists: Check if a directory path exists
static JSValue wrapped_DirectoryExists(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char dirPath = NULL;
  dirPath = JS_ToCString(ctx, argv[0]);
  if (dirPath == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, DirectoryExists(dirPath));
}

// IsFileExtension: Check file extension (including point: .png, .wav)
static JSValue wrapped_IsFileExtension(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;
  const char ext = NULL;
  ext = JS_ToCString(ctx, argv[1]);
  if (ext == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsFileExtension(fileName, ext));
}

// GetFileExtension: Get pointer to extension for a filename string (includes dot: '.png')
static JSValue wrapped_GetFileExtension(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// GetFileName: Get pointer to filename for a path string
static JSValue wrapped_GetFileName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char filePath = NULL;
  filePath = JS_ToCString(ctx, argv[0]);
  if (filePath == NULL) return JS_EXCEPTION;

}

// GetFileNameWithoutExt: Get filename string without extension (uses static string)
static JSValue wrapped_GetFileNameWithoutExt(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char filePath = NULL;
  filePath = JS_ToCString(ctx, argv[0]);
  if (filePath == NULL) return JS_EXCEPTION;

}

// GetDirectoryPath: Get full path for a given fileName with path (uses static string)
static JSValue wrapped_GetDirectoryPath(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char filePath = NULL;
  filePath = JS_ToCString(ctx, argv[0]);
  if (filePath == NULL) return JS_EXCEPTION;

}

// GetPrevDirectoryPath: Get previous directory path for a given path (uses static string)
static JSValue wrapped_GetPrevDirectoryPath(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char dirPath = NULL;
  dirPath = JS_ToCString(ctx, argv[0]);
  if (dirPath == NULL) return JS_EXCEPTION;

}

// GetWorkingDirectory: Get current working directory (uses static string)
static JSValue wrapped_GetWorkingDirectory(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetDirectoryFiles: Get filenames in a directory path (memory should be freed)
static JSValue wrapped_GetDirectoryFiles(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char dirPath = NULL;
  dirPath = JS_ToCString(ctx, argv[0]);
  if (dirPath == NULL) return JS_EXCEPTION;
  int count;
  if (JS_ToInt32(ctx, count, argv[1])) return JS_EXCEPTION;

}

// ClearDirectoryFiles: Clear directory files paths buffers (free memory)
static JSValue wrapped_ClearDirectoryFiles(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ClearDirectoryFiles();
  return JS_UNDEFINED;
}

// ChangeDirectory: Change working directory, return true on success
static JSValue wrapped_ChangeDirectory(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char dir = NULL;
  dir = JS_ToCString(ctx, argv[0]);
  if (dir == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, ChangeDirectory(dir));
}

// IsFileDropped: Check if a file has been dropped into window
static JSValue wrapped_IsFileDropped(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsFileDropped());
}

// GetDroppedFiles: Get dropped files names (memory should be freed)
static JSValue wrapped_GetDroppedFiles(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int count;
  if (JS_ToInt32(ctx, count, argv[0])) return JS_EXCEPTION;

}

// ClearDroppedFiles: Clear dropped files paths buffer (free memory)
static JSValue wrapped_ClearDroppedFiles(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ClearDroppedFiles();
  return JS_UNDEFINED;
}

// GetFileModTime: Get file modification time (last write time)
static JSValue wrapped_GetFileModTime(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// CompressData: Compress data (DEFLATE algorithm)
static JSValue wrapped_CompressData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int dataLength;
  if (JS_ToInt32(ctx, dataLength, argv[1])) return JS_EXCEPTION;
  int compDataLength;
  if (JS_ToInt32(ctx, compDataLength, argv[2])) return JS_EXCEPTION;

}

// DecompressData: Decompress data (DEFLATE algorithm)
static JSValue wrapped_DecompressData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int compDataLength;
  if (JS_ToInt32(ctx, compDataLength, argv[1])) return JS_EXCEPTION;
  int dataLength;
  if (JS_ToInt32(ctx, dataLength, argv[2])) return JS_EXCEPTION;

}

// SaveStorageValue: Save integer value to storage file (to defined position), returns true on success
static JSValue wrapped_SaveStorageValue(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int value;
  if (JS_ToInt32(ctx, value, argv[1])) return JS_EXCEPTION;

  return JS_NewBool(ctx, SaveStorageValue(position, value));
}

// LoadStorageValue: Load integer value from storage file (from defined position)
static JSValue wrapped_LoadStorageValue(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// OpenURL: Open URL with default system browser (if available)
static JSValue wrapped_OpenURL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char url = NULL;
  url = JS_ToCString(ctx, argv[0]);
  if (url == NULL) return JS_EXCEPTION;

  OpenURL(url);
  return JS_UNDEFINED;
}

// IsKeyPressed: Check if a key has been pressed once
static JSValue wrapped_IsKeyPressed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int key;
  if (JS_ToInt32(ctx, key, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsKeyPressed(key));
}

// IsKeyDown: Check if a key is being pressed
static JSValue wrapped_IsKeyDown(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int key;
  if (JS_ToInt32(ctx, key, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsKeyDown(key));
}

// IsKeyReleased: Check if a key has been released once
static JSValue wrapped_IsKeyReleased(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int key;
  if (JS_ToInt32(ctx, key, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsKeyReleased(key));
}

// IsKeyUp: Check if a key is NOT being pressed
static JSValue wrapped_IsKeyUp(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int key;
  if (JS_ToInt32(ctx, key, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsKeyUp(key));
}

// SetExitKey: Set a custom key to exit program (default is ESC)
static JSValue wrapped_SetExitKey(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int key;
  if (JS_ToInt32(ctx, key, argv[0])) return JS_EXCEPTION;

  SetExitKey(key);
  return JS_UNDEFINED;
}

// GetKeyPressed: Get key pressed (keycode), call it multiple times for keys queued
static JSValue wrapped_GetKeyPressed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetCharPressed: Get char pressed (unicode), call it multiple times for chars queued
static JSValue wrapped_GetCharPressed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// IsGamepadAvailable: Check if a gamepad is available
static JSValue wrapped_IsGamepadAvailable(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsGamepadAvailable(gamepad));
}

// IsGamepadName: Check gamepad name (if available)
static JSValue wrapped_IsGamepadName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;
  const char name = NULL;
  name = JS_ToCString(ctx, argv[1]);
  if (name == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsGamepadName(gamepad, name));
}

// GetGamepadName: Get gamepad internal name id
static JSValue wrapped_GetGamepadName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;

}

// IsGamepadButtonPressed: Check if a gamepad button has been pressed once
static JSValue wrapped_IsGamepadButtonPressed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;
  int button;
  if (JS_ToInt32(ctx, button, argv[1])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsGamepadButtonPressed(gamepad, button));
}

// IsGamepadButtonDown: Check if a gamepad button is being pressed
static JSValue wrapped_IsGamepadButtonDown(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;
  int button;
  if (JS_ToInt32(ctx, button, argv[1])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsGamepadButtonDown(gamepad, button));
}

// IsGamepadButtonReleased: Check if a gamepad button has been released once
static JSValue wrapped_IsGamepadButtonReleased(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;
  int button;
  if (JS_ToInt32(ctx, button, argv[1])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsGamepadButtonReleased(gamepad, button));
}

// IsGamepadButtonUp: Check if a gamepad button is NOT being pressed
static JSValue wrapped_IsGamepadButtonUp(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;
  int button;
  if (JS_ToInt32(ctx, button, argv[1])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsGamepadButtonUp(gamepad, button));
}

// GetGamepadButtonPressed: Get the last gamepad button pressed
static JSValue wrapped_GetGamepadButtonPressed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetGamepadAxisCount: Get gamepad axis count for a gamepad
static JSValue wrapped_GetGamepadAxisCount(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;

}

// GetGamepadAxisMovement: Get axis movement value for a gamepad axis
static JSValue wrapped_GetGamepadAxisMovement(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gamepad;
  if (JS_ToInt32(ctx, gamepad, argv[0])) return JS_EXCEPTION;
  int axis;
  if (JS_ToInt32(ctx, axis, argv[1])) return JS_EXCEPTION;

  return JS_NewFloat64(ctx, GetGamepadAxisMovement(gamepad, axis));
}

// SetGamepadMappings: Set internal gamepad mappings (SDL_GameControllerDB)
static JSValue wrapped_SetGamepadMappings(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char mappings = NULL;
  mappings = JS_ToCString(ctx, argv[0]);
  if (mappings == NULL) return JS_EXCEPTION;

}

// IsMouseButtonPressed: Check if a mouse button has been pressed once
static JSValue wrapped_IsMouseButtonPressed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int button;
  if (JS_ToInt32(ctx, button, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsMouseButtonPressed(button));
}

// IsMouseButtonDown: Check if a mouse button is being pressed
static JSValue wrapped_IsMouseButtonDown(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int button;
  if (JS_ToInt32(ctx, button, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsMouseButtonDown(button));
}

// IsMouseButtonReleased: Check if a mouse button has been released once
static JSValue wrapped_IsMouseButtonReleased(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int button;
  if (JS_ToInt32(ctx, button, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsMouseButtonReleased(button));
}

// IsMouseButtonUp: Check if a mouse button is NOT being pressed
static JSValue wrapped_IsMouseButtonUp(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int button;
  if (JS_ToInt32(ctx, button, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsMouseButtonUp(button));
}

// GetMouseX: Get mouse position X
static JSValue wrapped_GetMouseX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetMouseY: Get mouse position Y
static JSValue wrapped_GetMouseY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetMousePosition: Get mouse position XY
static JSValue wrapped_GetMousePosition(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// SetMousePosition: Set mouse position XY
static JSValue wrapped_SetMousePosition(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int x;
  if (JS_ToInt32(ctx, x, argv[0])) return JS_EXCEPTION;
  int y;
  if (JS_ToInt32(ctx, y, argv[1])) return JS_EXCEPTION;

  SetMousePosition(x, y);
  return JS_UNDEFINED;
}

// SetMouseOffset: Set mouse offset
static JSValue wrapped_SetMouseOffset(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int offsetX;
  if (JS_ToInt32(ctx, offsetX, argv[0])) return JS_EXCEPTION;
  int offsetY;
  if (JS_ToInt32(ctx, offsetY, argv[1])) return JS_EXCEPTION;

  SetMouseOffset(offsetX, offsetY);
  return JS_UNDEFINED;
}

// SetMouseScale: Set mouse scaling
static JSValue wrapped_SetMouseScale(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetMouseScale(scaleX, scaleY);
  return JS_UNDEFINED;
}

// GetMouseWheelMove: Get mouse wheel movement Y
static JSValue wrapped_GetMouseWheelMove(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, GetMouseWheelMove());
}

// SetMouseCursor: Set mouse cursor
static JSValue wrapped_SetMouseCursor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int cursor;
  if (JS_ToInt32(ctx, cursor, argv[0])) return JS_EXCEPTION;

  SetMouseCursor(cursor);
  return JS_UNDEFINED;
}

// GetTouchX: Get touch position X for touch point 0 (relative to screen size)
static JSValue wrapped_GetTouchX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetTouchY: Get touch position Y for touch point 0 (relative to screen size)
static JSValue wrapped_GetTouchY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetTouchPosition: Get touch position XY for a touch point index (relative to screen size)
static JSValue wrapped_GetTouchPosition(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int index;
  if (JS_ToInt32(ctx, index, argv[0])) return JS_EXCEPTION;

}

// SetGesturesEnabled: Enable a set of gestures using flags
static JSValue wrapped_SetGesturesEnabled(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetGesturesEnabled(flags);
  return JS_UNDEFINED;
}

// IsGestureDetected: Check if a gesture have been detected
static JSValue wrapped_IsGestureDetected(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int gesture;
  if (JS_ToInt32(ctx, gesture, argv[0])) return JS_EXCEPTION;

  return JS_NewBool(ctx, IsGestureDetected(gesture));
}

// GetGestureDetected: Get latest detected gesture
static JSValue wrapped_GetGestureDetected(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetTouchPointsCount: Get touch points count
static JSValue wrapped_GetTouchPointsCount(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetGestureHoldDuration: Get gesture hold time in milliseconds
static JSValue wrapped_GetGestureHoldDuration(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, GetGestureHoldDuration());
}

// GetGestureDragVector: Get gesture drag vector
static JSValue wrapped_GetGestureDragVector(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetGestureDragAngle: Get gesture drag angle
static JSValue wrapped_GetGestureDragAngle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, GetGestureDragAngle());
}

// GetGesturePinchVector: Get gesture pinch delta
static JSValue wrapped_GetGesturePinchVector(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetGesturePinchAngle: Get gesture pinch angle
static JSValue wrapped_GetGesturePinchAngle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, GetGesturePinchAngle());
}

// SetCameraMode: Set camera mode (multiple camera modes available)
static JSValue wrapped_SetCameraMode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int mode;
  if (JS_ToInt32(ctx, mode, argv[1])) return JS_EXCEPTION;

  SetCameraMode(camera, mode);
  return JS_UNDEFINED;
}

// UpdateCamera: Update camera position for selected mode
static JSValue wrapped_UpdateCamera(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UpdateCamera(camera);
  return JS_UNDEFINED;
}

// SetCameraPanControl: Set camera pan key to combine with mouse movement (free camera)
static JSValue wrapped_SetCameraPanControl(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int keyPan;
  if (JS_ToInt32(ctx, keyPan, argv[0])) return JS_EXCEPTION;

  SetCameraPanControl(keyPan);
  return JS_UNDEFINED;
}

// SetCameraAltControl: Set camera alt key to combine with mouse movement (free camera)
static JSValue wrapped_SetCameraAltControl(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int keyAlt;
  if (JS_ToInt32(ctx, keyAlt, argv[0])) return JS_EXCEPTION;

  SetCameraAltControl(keyAlt);
  return JS_UNDEFINED;
}

// SetCameraSmoothZoomControl: Set camera smooth zoom key to combine with mouse (free camera)
static JSValue wrapped_SetCameraSmoothZoomControl(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int keySmoothZoom;
  if (JS_ToInt32(ctx, keySmoothZoom, argv[0])) return JS_EXCEPTION;

  SetCameraSmoothZoomControl(keySmoothZoom);
  return JS_UNDEFINED;
}

// SetCameraMoveControls: Set camera move controls (1st person and 3rd person cameras)
static JSValue wrapped_SetCameraMoveControls(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int keyFront;
  if (JS_ToInt32(ctx, keyFront, argv[0])) return JS_EXCEPTION;
  int keyBack;
  if (JS_ToInt32(ctx, keyBack, argv[1])) return JS_EXCEPTION;
  int keyRight;
  if (JS_ToInt32(ctx, keyRight, argv[2])) return JS_EXCEPTION;
  int keyLeft;
  if (JS_ToInt32(ctx, keyLeft, argv[3])) return JS_EXCEPTION;
  int keyUp;
  if (JS_ToInt32(ctx, keyUp, argv[4])) return JS_EXCEPTION;
  int keyDown;
  if (JS_ToInt32(ctx, keyDown, argv[5])) return JS_EXCEPTION;

  SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
  return JS_UNDEFINED;
}

// SetShapesTexture: Set texture and rectangle to be used on shapes drawing
static JSValue wrapped_SetShapesTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetShapesTexture(texture, source);
  return JS_UNDEFINED;
}

// DrawPixel: Draw a pixel
static JSValue wrapped_DrawPixel(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[0])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[1])) return JS_EXCEPTION;

  DrawPixel(posX, posY, color);
  return JS_UNDEFINED;
}

// DrawPixelV: Draw a pixel (Vector version)
static JSValue wrapped_DrawPixelV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawPixelV(position, color);
  return JS_UNDEFINED;
}

// DrawLine: Draw a line
static JSValue wrapped_DrawLine(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int startPosX;
  if (JS_ToInt32(ctx, startPosX, argv[0])) return JS_EXCEPTION;
  int startPosY;
  if (JS_ToInt32(ctx, startPosY, argv[1])) return JS_EXCEPTION;
  int endPosX;
  if (JS_ToInt32(ctx, endPosX, argv[2])) return JS_EXCEPTION;
  int endPosY;
  if (JS_ToInt32(ctx, endPosY, argv[3])) return JS_EXCEPTION;

  DrawLine(startPosX, startPosY, endPosX, endPosY, color);
  return JS_UNDEFINED;
}

// DrawLineV: Draw a line (Vector version)
static JSValue wrapped_DrawLineV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawLineV(startPos, endPos, color);
  return JS_UNDEFINED;
}

// DrawLineEx: Draw a line defining thickness
static JSValue wrapped_DrawLineEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawLineEx(startPos, endPos, thick, color);
  return JS_UNDEFINED;
}

// DrawLineBezier: Draw a line using cubic-bezier curves in-out
static JSValue wrapped_DrawLineBezier(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawLineBezier(startPos, endPos, thick, color);
  return JS_UNDEFINED;
}

// DrawLineBezierQuad: raw line using quadratic bezier curves with a control point
static JSValue wrapped_DrawLineBezierQuad(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawLineBezierQuad(startPos, endPos, controlPos, thick, color);
  return JS_UNDEFINED;
}

// DrawLineStrip: Draw lines sequence
static JSValue wrapped_DrawLineStrip(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int pointsCount;
  if (JS_ToInt32(ctx, pointsCount, argv[1])) return JS_EXCEPTION;

  DrawLineStrip(points, pointsCount, color);
  return JS_UNDEFINED;
}

// DrawCircle: Draw a color-filled circle
static JSValue wrapped_DrawCircle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int centerX;
  if (JS_ToInt32(ctx, centerX, argv[0])) return JS_EXCEPTION;
  int centerY;
  if (JS_ToInt32(ctx, centerY, argv[1])) return JS_EXCEPTION;

  DrawCircle(centerX, centerY, radius, color);
  return JS_UNDEFINED;
}

// DrawCircleSector: Draw a piece of a circle
static JSValue wrapped_DrawCircleSector(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int segments;
  if (JS_ToInt32(ctx, segments, argv[4])) return JS_EXCEPTION;

  DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
  return JS_UNDEFINED;
}

// DrawCircleSectorLines: Draw circle sector outline
static JSValue wrapped_DrawCircleSectorLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int segments;
  if (JS_ToInt32(ctx, segments, argv[4])) return JS_EXCEPTION;

  DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
  return JS_UNDEFINED;
}

// DrawCircleGradient: Draw a gradient-filled circle
static JSValue wrapped_DrawCircleGradient(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int centerX;
  if (JS_ToInt32(ctx, centerX, argv[0])) return JS_EXCEPTION;
  int centerY;
  if (JS_ToInt32(ctx, centerY, argv[1])) return JS_EXCEPTION;

  DrawCircleGradient(centerX, centerY, radius, color1, color2);
  return JS_UNDEFINED;
}

// DrawCircleV: Draw a color-filled circle (Vector version)
static JSValue wrapped_DrawCircleV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawCircleV(center, radius, color);
  return JS_UNDEFINED;
}

// DrawCircleLines: Draw circle outline
static JSValue wrapped_DrawCircleLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int centerX;
  if (JS_ToInt32(ctx, centerX, argv[0])) return JS_EXCEPTION;
  int centerY;
  if (JS_ToInt32(ctx, centerY, argv[1])) return JS_EXCEPTION;

  DrawCircleLines(centerX, centerY, radius, color);
  return JS_UNDEFINED;
}

// DrawEllipse: Draw ellipse
static JSValue wrapped_DrawEllipse(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int centerX;
  if (JS_ToInt32(ctx, centerX, argv[0])) return JS_EXCEPTION;
  int centerY;
  if (JS_ToInt32(ctx, centerY, argv[1])) return JS_EXCEPTION;

  DrawEllipse(centerX, centerY, radiusH, radiusV, color);
  return JS_UNDEFINED;
}

// DrawEllipseLines: Draw ellipse outline
static JSValue wrapped_DrawEllipseLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int centerX;
  if (JS_ToInt32(ctx, centerX, argv[0])) return JS_EXCEPTION;
  int centerY;
  if (JS_ToInt32(ctx, centerY, argv[1])) return JS_EXCEPTION;

  DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
  return JS_UNDEFINED;
}

// DrawRing: Draw ring
static JSValue wrapped_DrawRing(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int segments;
  if (JS_ToInt32(ctx, segments, argv[5])) return JS_EXCEPTION;

  DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
  return JS_UNDEFINED;
}

// DrawRingLines: Draw ring outline
static JSValue wrapped_DrawRingLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int segments;
  if (JS_ToInt32(ctx, segments, argv[5])) return JS_EXCEPTION;

  DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
  return JS_UNDEFINED;
}

// DrawRectangle: Draw a color-filled rectangle
static JSValue wrapped_DrawRectangle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[0])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[1])) return JS_EXCEPTION;
  int width;
  if (JS_ToInt32(ctx, width, argv[2])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[3])) return JS_EXCEPTION;

  DrawRectangle(posX, posY, width, height, color);
  return JS_UNDEFINED;
}

// DrawRectangleV: Draw a color-filled rectangle (Vector version)
static JSValue wrapped_DrawRectangleV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawRectangleV(position, size, color);
  return JS_UNDEFINED;
}

// DrawRectangleRec: Draw a color-filled rectangle
static JSValue wrapped_DrawRectangleRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawRectangleRec(rec, color);
  return JS_UNDEFINED;
}

// DrawRectanglePro: Draw a color-filled rectangle with pro parameters
static JSValue wrapped_DrawRectanglePro(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawRectanglePro(rec, origin, rotation, color);
  return JS_UNDEFINED;
}

// DrawRectangleGradientV: Draw a vertical-gradient-filled rectangle
static JSValue wrapped_DrawRectangleGradientV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[0])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[1])) return JS_EXCEPTION;
  int width;
  if (JS_ToInt32(ctx, width, argv[2])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[3])) return JS_EXCEPTION;

  DrawRectangleGradientV(posX, posY, width, height, color1, color2);
  return JS_UNDEFINED;
}

// DrawRectangleGradientH: Draw a horizontal-gradient-filled rectangle
static JSValue wrapped_DrawRectangleGradientH(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[0])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[1])) return JS_EXCEPTION;
  int width;
  if (JS_ToInt32(ctx, width, argv[2])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[3])) return JS_EXCEPTION;

  DrawRectangleGradientH(posX, posY, width, height, color1, color2);
  return JS_UNDEFINED;
}

// DrawRectangleGradientEx: Draw a gradient-filled rectangle with custom vertex colors
static JSValue wrapped_DrawRectangleGradientEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawRectangleGradientEx(rec, col1, col2, col3, col4);
  return JS_UNDEFINED;
}

// DrawRectangleLines: Draw rectangle outline
static JSValue wrapped_DrawRectangleLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[0])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[1])) return JS_EXCEPTION;
  int width;
  if (JS_ToInt32(ctx, width, argv[2])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[3])) return JS_EXCEPTION;

  DrawRectangleLines(posX, posY, width, height, color);
  return JS_UNDEFINED;
}

// DrawRectangleLinesEx: Draw rectangle outline with extended parameters
static JSValue wrapped_DrawRectangleLinesEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawRectangleLinesEx(rec, lineThick, color);
  return JS_UNDEFINED;
}

// DrawRectangleRounded: Draw rectangle with rounded edges
static JSValue wrapped_DrawRectangleRounded(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int segments;
  if (JS_ToInt32(ctx, segments, argv[2])) return JS_EXCEPTION;

  DrawRectangleRounded(rec, roundness, segments, color);
  return JS_UNDEFINED;
}

// DrawRectangleRoundedLines: Draw rectangle with rounded edges outline
static JSValue wrapped_DrawRectangleRoundedLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int segments;
  if (JS_ToInt32(ctx, segments, argv[2])) return JS_EXCEPTION;

  DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color);
  return JS_UNDEFINED;
}

// DrawTriangle: Draw a color-filled triangle (vertex in counter-clockwise order!)
static JSValue wrapped_DrawTriangle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTriangle(v1, v2, v3, color);
  return JS_UNDEFINED;
}

// DrawTriangleLines: Draw triangle outline (vertex in counter-clockwise order!)
static JSValue wrapped_DrawTriangleLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTriangleLines(v1, v2, v3, color);
  return JS_UNDEFINED;
}

// DrawTriangleFan: Draw a triangle fan defined by points (first vertex is the center)
static JSValue wrapped_DrawTriangleFan(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int pointsCount;
  if (JS_ToInt32(ctx, pointsCount, argv[1])) return JS_EXCEPTION;

  DrawTriangleFan(points, pointsCount, color);
  return JS_UNDEFINED;
}

// DrawTriangleStrip: Draw a triangle strip defined by points
static JSValue wrapped_DrawTriangleStrip(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int pointsCount;
  if (JS_ToInt32(ctx, pointsCount, argv[1])) return JS_EXCEPTION;

  DrawTriangleStrip(points, pointsCount, color);
  return JS_UNDEFINED;
}

// DrawPoly: Draw a regular polygon (Vector version)
static JSValue wrapped_DrawPoly(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int sides;
  if (JS_ToInt32(ctx, sides, argv[1])) return JS_EXCEPTION;

  DrawPoly(center, sides, radius, rotation, color);
  return JS_UNDEFINED;
}

// DrawPolyLines: Draw a polygon outline of n sides
static JSValue wrapped_DrawPolyLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int sides;
  if (JS_ToInt32(ctx, sides, argv[1])) return JS_EXCEPTION;

  DrawPolyLines(center, sides, radius, rotation, color);
  return JS_UNDEFINED;
}

// DrawPolyLinesEx: Draw a polygon outline of n sides with extended parameters
static JSValue wrapped_DrawPolyLinesEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int sides;
  if (JS_ToInt32(ctx, sides, argv[1])) return JS_EXCEPTION;

  DrawPolyLinesEx(center, sides, radius, rotation, lineThick, color);
  return JS_UNDEFINED;
}

// CheckCollisionRecs: Check collision between two rectangles
static JSValue wrapped_CheckCollisionRecs(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionRecs(rec1, rec2));
}

// CheckCollisionCircles: Check collision between two circles
static JSValue wrapped_CheckCollisionCircles(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionCircles(center1, radius1, center2, radius2));
}

// CheckCollisionCircleRec: Check collision between circle and rectangle
static JSValue wrapped_CheckCollisionCircleRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionCircleRec(center, radius, rec));
}

// CheckCollisionPointRec: Check if point is inside rectangle
static JSValue wrapped_CheckCollisionPointRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionPointRec(point, rec));
}

// CheckCollisionPointCircle: Check if point is inside circle
static JSValue wrapped_CheckCollisionPointCircle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionPointCircle(point, center, radius));
}

// CheckCollisionPointTriangle: Check if point is inside a triangle
static JSValue wrapped_CheckCollisionPointTriangle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionPointTriangle(point, p1, p2, p3));
}

// CheckCollisionLines: Check the collision between two lines defined by two points each, returns collision point by reference
static JSValue wrapped_CheckCollisionLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint));
}

// GetCollisionRec: Get collision rectangle for two rectangles collision
static JSValue wrapped_GetCollisionRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// LoadImage: Load image from file into CPU memory (RAM)
static JSValue wrapped_LoadImage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// LoadImageRaw: Load image from RAW file data
static JSValue wrapped_LoadImageRaw(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;
  int width;
  if (JS_ToInt32(ctx, width, argv[1])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[2])) return JS_EXCEPTION;
  int format;
  if (JS_ToInt32(ctx, format, argv[3])) return JS_EXCEPTION;
  int headerSize;
  if (JS_ToInt32(ctx, headerSize, argv[4])) return JS_EXCEPTION;

}

// LoadImageAnim: Load image sequence from file (frames appended to image.data)
static JSValue wrapped_LoadImageAnim(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;
  int frames;
  if (JS_ToInt32(ctx, frames, argv[1])) return JS_EXCEPTION;

}

// LoadImageFromMemory: Load image from memory buffer, fileType refers to extension: i.e. '.png'
static JSValue wrapped_LoadImageFromMemory(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileType = NULL;
  fileType = JS_ToCString(ctx, argv[0]);
  if (fileType == NULL) return JS_EXCEPTION;
  int dataSize;
  if (JS_ToInt32(ctx, dataSize, argv[2])) return JS_EXCEPTION;

}

// UnloadImage: Unload image from CPU memory (RAM)
static JSValue wrapped_UnloadImage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadImage(image);
  return JS_UNDEFINED;
}

// ExportImage: Export image data to file, returns true on success
static JSValue wrapped_ExportImage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[1]);
  if (fileName == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, ExportImage(image, fileName));
}

// ExportImageAsCode: Export image as code file defining an array of bytes, returns true on success
static JSValue wrapped_ExportImageAsCode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[1]);
  if (fileName == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, ExportImageAsCode(image, fileName));
}

// GenImageColor: Generate image: plain color
static JSValue wrapped_GenImageColor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

}

// GenImageGradientV: Generate image: vertical gradient
static JSValue wrapped_GenImageGradientV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

}

// GenImageGradientH: Generate image: horizontal gradient
static JSValue wrapped_GenImageGradientH(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

}

// GenImageGradientRadial: Generate image: radial gradient
static JSValue wrapped_GenImageGradientRadial(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

}

// GenImageChecked: Generate image: checked
static JSValue wrapped_GenImageChecked(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;
  int checksX;
  if (JS_ToInt32(ctx, checksX, argv[2])) return JS_EXCEPTION;
  int checksY;
  if (JS_ToInt32(ctx, checksY, argv[3])) return JS_EXCEPTION;

}

// GenImageWhiteNoise: Generate image: white noise
static JSValue wrapped_GenImageWhiteNoise(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

}

// GenImagePerlinNoise: Generate image: perlin noise
static JSValue wrapped_GenImagePerlinNoise(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;
  int offsetX;
  if (JS_ToInt32(ctx, offsetX, argv[2])) return JS_EXCEPTION;
  int offsetY;
  if (JS_ToInt32(ctx, offsetY, argv[3])) return JS_EXCEPTION;

}

// GenImageCellular: Generate image: cellular algorithm. Bigger tileSize means bigger cells
static JSValue wrapped_GenImageCellular(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;
  int tileSize;
  if (JS_ToInt32(ctx, tileSize, argv[2])) return JS_EXCEPTION;

}

// ImageCopy: Create an image duplicate (useful for transformations)
static JSValue wrapped_ImageCopy(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ImageFromImage: Create an image from another image piece
static JSValue wrapped_ImageFromImage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ImageText: Create an image from text (default font)
static JSValue wrapped_ImageText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[1])) return JS_EXCEPTION;

}

// ImageTextEx: Create an image from text (custom sprite font)
static JSValue wrapped_ImageTextEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;

}

// ImageFormat: Convert image data to desired format
static JSValue wrapped_ImageFormat(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int newFormat;
  if (JS_ToInt32(ctx, newFormat, argv[1])) return JS_EXCEPTION;

  ImageFormat(image, newFormat);
  return JS_UNDEFINED;
}

// ImageToPOT: Convert image to POT (power-of-two)
static JSValue wrapped_ImageToPOT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageToPOT(image, fill);
  return JS_UNDEFINED;
}

// ImageCrop: Crop an image to a defined rectangle
static JSValue wrapped_ImageCrop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageCrop(image, crop);
  return JS_UNDEFINED;
}

// ImageAlphaCrop: Crop image depending on alpha value
static JSValue wrapped_ImageAlphaCrop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageAlphaCrop(image, threshold);
  return JS_UNDEFINED;
}

// ImageAlphaClear: Clear alpha channel to desired color
static JSValue wrapped_ImageAlphaClear(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageAlphaClear(image, color, threshold);
  return JS_UNDEFINED;
}

// ImageAlphaMask: Apply alpha mask to image
static JSValue wrapped_ImageAlphaMask(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageAlphaMask(image, alphaMask);
  return JS_UNDEFINED;
}

// ImageAlphaPremultiply: Premultiply alpha channel
static JSValue wrapped_ImageAlphaPremultiply(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageAlphaPremultiply(image);
  return JS_UNDEFINED;
}

// ImageResize: Resize image (Bicubic scaling algorithm)
static JSValue wrapped_ImageResize(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int newWidth;
  if (JS_ToInt32(ctx, newWidth, argv[1])) return JS_EXCEPTION;
  int newHeight;
  if (JS_ToInt32(ctx, newHeight, argv[2])) return JS_EXCEPTION;

  ImageResize(image, newWidth, newHeight);
  return JS_UNDEFINED;
}

// ImageResizeNN: Resize image (Nearest-Neighbor scaling algorithm)
static JSValue wrapped_ImageResizeNN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int newWidth;
  if (JS_ToInt32(ctx, newWidth, argv[1])) return JS_EXCEPTION;
  int newHeight;
  if (JS_ToInt32(ctx, newHeight, argv[2])) return JS_EXCEPTION;

  ImageResizeNN(image, newWidth, newHeight);
  return JS_UNDEFINED;
}

// ImageResizeCanvas: Resize canvas and fill with color
static JSValue wrapped_ImageResizeCanvas(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int newWidth;
  if (JS_ToInt32(ctx, newWidth, argv[1])) return JS_EXCEPTION;
  int newHeight;
  if (JS_ToInt32(ctx, newHeight, argv[2])) return JS_EXCEPTION;
  int offsetX;
  if (JS_ToInt32(ctx, offsetX, argv[3])) return JS_EXCEPTION;
  int offsetY;
  if (JS_ToInt32(ctx, offsetY, argv[4])) return JS_EXCEPTION;

  ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill);
  return JS_UNDEFINED;
}

// ImageMipmaps: Compute all mipmap levels for a provided image
static JSValue wrapped_ImageMipmaps(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageMipmaps(image);
  return JS_UNDEFINED;
}

// ImageDither: Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
static JSValue wrapped_ImageDither(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int rBpp;
  if (JS_ToInt32(ctx, rBpp, argv[1])) return JS_EXCEPTION;
  int gBpp;
  if (JS_ToInt32(ctx, gBpp, argv[2])) return JS_EXCEPTION;
  int bBpp;
  if (JS_ToInt32(ctx, bBpp, argv[3])) return JS_EXCEPTION;
  int aBpp;
  if (JS_ToInt32(ctx, aBpp, argv[4])) return JS_EXCEPTION;

  ImageDither(image, rBpp, gBpp, bBpp, aBpp);
  return JS_UNDEFINED;
}

// ImageFlipVertical: Flip image vertically
static JSValue wrapped_ImageFlipVertical(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageFlipVertical(image);
  return JS_UNDEFINED;
}

// ImageFlipHorizontal: Flip image horizontally
static JSValue wrapped_ImageFlipHorizontal(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageFlipHorizontal(image);
  return JS_UNDEFINED;
}

// ImageRotateCW: Rotate image clockwise 90deg
static JSValue wrapped_ImageRotateCW(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageRotateCW(image);
  return JS_UNDEFINED;
}

// ImageRotateCCW: Rotate image counter-clockwise 90deg
static JSValue wrapped_ImageRotateCCW(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageRotateCCW(image);
  return JS_UNDEFINED;
}

// ImageColorTint: Modify image color: tint
static JSValue wrapped_ImageColorTint(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageColorTint(image, color);
  return JS_UNDEFINED;
}

// ImageColorInvert: Modify image color: invert
static JSValue wrapped_ImageColorInvert(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageColorInvert(image);
  return JS_UNDEFINED;
}

// ImageColorGrayscale: Modify image color: grayscale
static JSValue wrapped_ImageColorGrayscale(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageColorGrayscale(image);
  return JS_UNDEFINED;
}

// ImageColorContrast: Modify image color: contrast (-100 to 100)
static JSValue wrapped_ImageColorContrast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageColorContrast(image, contrast);
  return JS_UNDEFINED;
}

// ImageColorBrightness: Modify image color: brightness (-255 to 255)
static JSValue wrapped_ImageColorBrightness(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int brightness;
  if (JS_ToInt32(ctx, brightness, argv[1])) return JS_EXCEPTION;

  ImageColorBrightness(image, brightness);
  return JS_UNDEFINED;
}

// ImageColorReplace: Modify image color: replace color
static JSValue wrapped_ImageColorReplace(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageColorReplace(image, color, replace);
  return JS_UNDEFINED;
}

// LoadImageColors: Load color data from image as a Color array (RGBA - 32bit)
static JSValue wrapped_LoadImageColors(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// LoadImagePalette: Load colors palette from image as a Color array (RGBA - 32bit)
static JSValue wrapped_LoadImagePalette(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int maxPaletteSize;
  if (JS_ToInt32(ctx, maxPaletteSize, argv[1])) return JS_EXCEPTION;
  int colorsCount;
  if (JS_ToInt32(ctx, colorsCount, argv[2])) return JS_EXCEPTION;

}

// UnloadImageColors: Unload color data loaded with LoadImageColors()
static JSValue wrapped_UnloadImageColors(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadImageColors(colors);
  return JS_UNDEFINED;
}

// UnloadImagePalette: Unload colors palette loaded with LoadImagePalette()
static JSValue wrapped_UnloadImagePalette(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadImagePalette(colors);
  return JS_UNDEFINED;
}

// GetImageAlphaBorder: Get image alpha border rectangle
static JSValue wrapped_GetImageAlphaBorder(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ImageClearBackground: Clear image background with given color
static JSValue wrapped_ImageClearBackground(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageClearBackground(dst, color);
  return JS_UNDEFINED;
}

// ImageDrawPixel: Draw pixel within an image
static JSValue wrapped_ImageDrawPixel(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[1])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[2])) return JS_EXCEPTION;

  ImageDrawPixel(dst, posX, posY, color);
  return JS_UNDEFINED;
}

// ImageDrawPixelV: Draw pixel within an image (Vector version)
static JSValue wrapped_ImageDrawPixelV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageDrawPixelV(dst, position, color);
  return JS_UNDEFINED;
}

// ImageDrawLine: Draw line within an image
static JSValue wrapped_ImageDrawLine(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int startPosX;
  if (JS_ToInt32(ctx, startPosX, argv[1])) return JS_EXCEPTION;
  int startPosY;
  if (JS_ToInt32(ctx, startPosY, argv[2])) return JS_EXCEPTION;
  int endPosX;
  if (JS_ToInt32(ctx, endPosX, argv[3])) return JS_EXCEPTION;
  int endPosY;
  if (JS_ToInt32(ctx, endPosY, argv[4])) return JS_EXCEPTION;

  ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color);
  return JS_UNDEFINED;
}

// ImageDrawLineV: Draw line within an image (Vector version)
static JSValue wrapped_ImageDrawLineV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageDrawLineV(dst, start, end, color);
  return JS_UNDEFINED;
}

// ImageDrawCircle: Draw circle within an image
static JSValue wrapped_ImageDrawCircle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int centerX;
  if (JS_ToInt32(ctx, centerX, argv[1])) return JS_EXCEPTION;
  int centerY;
  if (JS_ToInt32(ctx, centerY, argv[2])) return JS_EXCEPTION;
  int radius;
  if (JS_ToInt32(ctx, radius, argv[3])) return JS_EXCEPTION;

  ImageDrawCircle(dst, centerX, centerY, radius, color);
  return JS_UNDEFINED;
}

// ImageDrawCircleV: Draw circle within an image (Vector version)
static JSValue wrapped_ImageDrawCircleV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int radius;
  if (JS_ToInt32(ctx, radius, argv[2])) return JS_EXCEPTION;

  ImageDrawCircleV(dst, center, radius, color);
  return JS_UNDEFINED;
}

// ImageDrawRectangle: Draw rectangle within an image
static JSValue wrapped_ImageDrawRectangle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[1])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[2])) return JS_EXCEPTION;
  int width;
  if (JS_ToInt32(ctx, width, argv[3])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[4])) return JS_EXCEPTION;

  ImageDrawRectangle(dst, posX, posY, width, height, color);
  return JS_UNDEFINED;
}

// ImageDrawRectangleV: Draw rectangle within an image (Vector version)
static JSValue wrapped_ImageDrawRectangleV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageDrawRectangleV(dst, position, size, color);
  return JS_UNDEFINED;
}

// ImageDrawRectangleRec: Draw rectangle within an image
static JSValue wrapped_ImageDrawRectangleRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageDrawRectangleRec(dst, rec, color);
  return JS_UNDEFINED;
}

// ImageDrawRectangleLines: Draw rectangle lines within an image
static JSValue wrapped_ImageDrawRectangleLines(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int thick;
  if (JS_ToInt32(ctx, thick, argv[2])) return JS_EXCEPTION;

  ImageDrawRectangleLines(dst, rec, thick, color);
  return JS_UNDEFINED;
}

// ImageDraw: Draw a source image within a destination image (tint applied to source)
static JSValue wrapped_ImageDraw(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ImageDraw(dst, src, srcRec, dstRec, tint);
  return JS_UNDEFINED;
}

// ImageDrawText: Draw text (using default font) within an image (destination)
static JSValue wrapped_ImageDrawText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;
  int posX;
  if (JS_ToInt32(ctx, posX, argv[2])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[3])) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[4])) return JS_EXCEPTION;

  ImageDrawText(dst, text, posX, posY, fontSize, color);
  return JS_UNDEFINED;
}

// ImageDrawTextEx: Draw text (custom sprite font) within an image (destination)
static JSValue wrapped_ImageDrawTextEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[2]);
  if (text == NULL) return JS_EXCEPTION;

  ImageDrawTextEx(dst, font, text, position, fontSize, spacing, tint);
  return JS_UNDEFINED;
}

// LoadTexture: Load texture from file into GPU memory (VRAM)
static JSValue wrapped_LoadTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// LoadTextureFromImage: Load texture from image data
static JSValue wrapped_LoadTextureFromImage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// LoadTextureCubemap: Load cubemap from image, multiple image cubemap layouts supported
static JSValue wrapped_LoadTextureCubemap(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int layout;
  if (JS_ToInt32(ctx, layout, argv[1])) return JS_EXCEPTION;

}

// LoadRenderTexture: Load texture for rendering (framebuffer)
static JSValue wrapped_LoadRenderTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;

}

// UnloadTexture: Unload texture from GPU memory (VRAM)
static JSValue wrapped_UnloadTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadTexture(texture);
  return JS_UNDEFINED;
}

// UnloadRenderTexture: Unload render texture from GPU memory (VRAM)
static JSValue wrapped_UnloadRenderTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadRenderTexture(target);
  return JS_UNDEFINED;
}

// UpdateTexture: Update GPU texture with new data
static JSValue wrapped_UpdateTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UpdateTexture(texture, pixels);
  return JS_UNDEFINED;
}

// UpdateTextureRec: Update GPU texture rectangle with new data
static JSValue wrapped_UpdateTextureRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UpdateTextureRec(texture, rec, pixels);
  return JS_UNDEFINED;
}

// GetTextureData: Get pixel data from GPU texture and return an Image
static JSValue wrapped_GetTextureData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetScreenData: Get pixel data from screen buffer and return an Image (screenshot)
static JSValue wrapped_GetScreenData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GenTextureMipmaps: Generate GPU mipmaps for a texture
static JSValue wrapped_GenTextureMipmaps(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  GenTextureMipmaps(texture);
  return JS_UNDEFINED;
}

// SetTextureFilter: Set texture scaling filter mode
static JSValue wrapped_SetTextureFilter(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int filter;
  if (JS_ToInt32(ctx, filter, argv[1])) return JS_EXCEPTION;

  SetTextureFilter(texture, filter);
  return JS_UNDEFINED;
}

// SetTextureWrap: Set texture wrapping mode
static JSValue wrapped_SetTextureWrap(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int wrap;
  if (JS_ToInt32(ctx, wrap, argv[1])) return JS_EXCEPTION;

  SetTextureWrap(texture, wrap);
  return JS_UNDEFINED;
}

// DrawTexture: Draw a Texture2D
static JSValue wrapped_DrawTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[1])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[2])) return JS_EXCEPTION;

  DrawTexture(texture, posX, posY, tint);
  return JS_UNDEFINED;
}

// DrawTextureV: Draw a Texture2D with position defined as Vector2
static JSValue wrapped_DrawTextureV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTextureV(texture, position, tint);
  return JS_UNDEFINED;
}

// DrawTextureEx: Draw a Texture2D with extended parameters
static JSValue wrapped_DrawTextureEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTextureEx(texture, position, rotation, scale, tint);
  return JS_UNDEFINED;
}

// DrawTextureRec: Draw a part of a texture defined by a rectangle
static JSValue wrapped_DrawTextureRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTextureRec(texture, source, position, tint);
  return JS_UNDEFINED;
}

// DrawTextureQuad: Draw texture quad with tiling and offset parameters
static JSValue wrapped_DrawTextureQuad(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTextureQuad(texture, tiling, offset, quad, tint);
  return JS_UNDEFINED;
}

// DrawTextureTiled: Draw part of a texture (defined by a rectangle) with rotation and scale tiled into dest.
static JSValue wrapped_DrawTextureTiled(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTextureTiled(texture, source, dest, origin, rotation, scale, tint);
  return JS_UNDEFINED;
}

// DrawTexturePro: Draw a part of a texture defined by a rectangle with 'pro' parameters
static JSValue wrapped_DrawTexturePro(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTexturePro(texture, source, dest, origin, rotation, tint);
  return JS_UNDEFINED;
}

// DrawTextureNPatch: Draws a texture (or part of it) that stretches or shrinks nicely
static JSValue wrapped_DrawTextureNPatch(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint);
  return JS_UNDEFINED;
}

// DrawTexturePoly: Draw a textured polygon
static JSValue wrapped_DrawTexturePoly(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int pointsCount;
  if (JS_ToInt32(ctx, pointsCount, argv[4])) return JS_EXCEPTION;

  DrawTexturePoly(texture, center, points, texcoords, pointsCount, tint);
  return JS_UNDEFINED;
}

// Fade: Get color with alpha applied, alpha goes from 0.0f to 1.0f
static JSValue wrapped_Fade(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ColorToInt: Get hexadecimal value for a Color
static JSValue wrapped_ColorToInt(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ColorNormalize: Get Color normalized as float [0..1]
static JSValue wrapped_ColorNormalize(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ColorFromNormalized: Get Color from normalized values [0..1]
static JSValue wrapped_ColorFromNormalized(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ColorToHSV: Get HSV values for a Color, hue [0..360], saturation/value [0..1]
static JSValue wrapped_ColorToHSV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ColorFromHSV: Get a Color from HSV values, hue [0..360], saturation/value [0..1]
static JSValue wrapped_ColorFromHSV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ColorAlpha: Get color with alpha applied, alpha goes from 0.0f to 1.0f
static JSValue wrapped_ColorAlpha(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// ColorAlphaBlend: Get src alpha-blended into dst color with tint
static JSValue wrapped_ColorAlphaBlend(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetColor: Get Color structure from hexadecimal value
static JSValue wrapped_GetColor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int hexValue;
  if (JS_ToInt32(ctx, hexValue, argv[0])) return JS_EXCEPTION;

}

// GetPixelColor: Get Color from a source pixel pointer of certain format
static JSValue wrapped_GetPixelColor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int format;
  if (JS_ToInt32(ctx, format, argv[1])) return JS_EXCEPTION;

}

// SetPixelColor: Set color formatted into destination pixel pointer
static JSValue wrapped_SetPixelColor(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int format;
  if (JS_ToInt32(ctx, format, argv[2])) return JS_EXCEPTION;

  SetPixelColor(dstPtr, color, format);
  return JS_UNDEFINED;
}

// GetPixelDataSize: Get pixel data size in bytes for certain format
static JSValue wrapped_GetPixelDataSize(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int width;
  if (JS_ToInt32(ctx, width, argv[0])) return JS_EXCEPTION;
  int height;
  if (JS_ToInt32(ctx, height, argv[1])) return JS_EXCEPTION;
  int format;
  if (JS_ToInt32(ctx, format, argv[2])) return JS_EXCEPTION;

}

// GetFontDefault: Get the default Font
static JSValue wrapped_GetFontDefault(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// LoadFont: Load font from file into GPU memory (VRAM)
static JSValue wrapped_LoadFont(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// LoadFontEx: Load font from file with extended parameters
static JSValue wrapped_LoadFontEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[1])) return JS_EXCEPTION;
  int fontChars;
  if (JS_ToInt32(ctx, fontChars, argv[2])) return JS_EXCEPTION;
  int charsCount;
  if (JS_ToInt32(ctx, charsCount, argv[3])) return JS_EXCEPTION;

}

// LoadFontFromImage: Load font from Image (XNA style)
static JSValue wrapped_LoadFontFromImage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int firstChar;
  if (JS_ToInt32(ctx, firstChar, argv[2])) return JS_EXCEPTION;

}

// LoadFontFromMemory: Load font from memory buffer, fileType refers to extension: i.e. '.ttf'
static JSValue wrapped_LoadFontFromMemory(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileType = NULL;
  fileType = JS_ToCString(ctx, argv[0]);
  if (fileType == NULL) return JS_EXCEPTION;
  int dataSize;
  if (JS_ToInt32(ctx, dataSize, argv[2])) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[3])) return JS_EXCEPTION;
  int fontChars;
  if (JS_ToInt32(ctx, fontChars, argv[4])) return JS_EXCEPTION;
  int charsCount;
  if (JS_ToInt32(ctx, charsCount, argv[5])) return JS_EXCEPTION;

}

// LoadFontData: Load font data for further use
static JSValue wrapped_LoadFontData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int dataSize;
  if (JS_ToInt32(ctx, dataSize, argv[1])) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[2])) return JS_EXCEPTION;
  int fontChars;
  if (JS_ToInt32(ctx, fontChars, argv[3])) return JS_EXCEPTION;
  int charsCount;
  if (JS_ToInt32(ctx, charsCount, argv[4])) return JS_EXCEPTION;
  int type;
  if (JS_ToInt32(ctx, type, argv[5])) return JS_EXCEPTION;

}

// GenImageFontAtlas: Generate image font atlas using chars info
static JSValue wrapped_GenImageFontAtlas(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int charsCount;
  if (JS_ToInt32(ctx, charsCount, argv[2])) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[3])) return JS_EXCEPTION;
  int padding;
  if (JS_ToInt32(ctx, padding, argv[4])) return JS_EXCEPTION;
  int packMethod;
  if (JS_ToInt32(ctx, packMethod, argv[5])) return JS_EXCEPTION;

}

// UnloadFontData: Unload font chars info data (RAM)
static JSValue wrapped_UnloadFontData(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int charsCount;
  if (JS_ToInt32(ctx, charsCount, argv[1])) return JS_EXCEPTION;

  UnloadFontData(chars, charsCount);
  return JS_UNDEFINED;
}

// UnloadFont: Unload Font from GPU memory (VRAM)
static JSValue wrapped_UnloadFont(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadFont(font);
  return JS_UNDEFINED;
}

// DrawFPS: Draw current FPS
static JSValue wrapped_DrawFPS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int posX;
  if (JS_ToInt32(ctx, posX, argv[0])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[1])) return JS_EXCEPTION;

  DrawFPS(posX, posY);
  return JS_UNDEFINED;
}

// DrawText: Draw text (using default font)
static JSValue wrapped_DrawText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  int posX;
  if (JS_ToInt32(ctx, posX, argv[1])) return JS_EXCEPTION;
  int posY;
  if (JS_ToInt32(ctx, posY, argv[2])) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[3])) return JS_EXCEPTION;

  DrawText(text, posX, posY, fontSize, color);
  return JS_UNDEFINED;
}

// DrawTextEx: Draw text using font and additional parameters
static JSValue wrapped_DrawTextEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;

  DrawTextEx(font, text, position, fontSize, spacing, tint);
  return JS_UNDEFINED;
}

// DrawTextRec: Draw text using font inside rectangle limits
static JSValue wrapped_DrawTextRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;
  bool wordWrap = JS_ToBool(ctx, argv[5]);

  DrawTextRec(font, text, rec, fontSize, spacing, wordWrap, tint);
  return JS_UNDEFINED;
}

// DrawTextRecEx: Draw text using font inside rectangle limits with support for text selection
static JSValue wrapped_DrawTextRecEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;
  bool wordWrap = JS_ToBool(ctx, argv[5]);
  int selectStart;
  if (JS_ToInt32(ctx, selectStart, argv[7])) return JS_EXCEPTION;
  int selectLength;
  if (JS_ToInt32(ctx, selectLength, argv[8])) return JS_EXCEPTION;

  DrawTextRecEx(font, text, rec, fontSize, spacing, wordWrap, tint, selectStart, selectLength, selectTint, selectBackTint);
  return JS_UNDEFINED;
}

// DrawTextCodepoint: Draw one character (codepoint)
static JSValue wrapped_DrawTextCodepoint(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int codepoint;
  if (JS_ToInt32(ctx, codepoint, argv[1])) return JS_EXCEPTION;

  DrawTextCodepoint(font, codepoint, position, fontSize, tint);
  return JS_UNDEFINED;
}

// MeasureText: Measure string width for default font
static JSValue wrapped_MeasureText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  int fontSize;
  if (JS_ToInt32(ctx, fontSize, argv[1])) return JS_EXCEPTION;

}

// MeasureTextEx: Measure string size for Font
static JSValue wrapped_MeasureTextEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[1]);
  if (text == NULL) return JS_EXCEPTION;

}

// GetGlyphIndex: Get index position for a unicode character on font
static JSValue wrapped_GetGlyphIndex(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int codepoint;
  if (JS_ToInt32(ctx, codepoint, argv[1])) return JS_EXCEPTION;

}

// TextCopy: Copy one string to another, returns bytes copied
static JSValue wrapped_TextCopy(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char dst = NULL;
  dst = JS_ToCString(ctx, argv[0]);
  if (dst == NULL) return JS_EXCEPTION;
  const char src = NULL;
  src = JS_ToCString(ctx, argv[1]);
  if (src == NULL) return JS_EXCEPTION;

}

// TextIsEqual: Check if two text string are equal
static JSValue wrapped_TextIsEqual(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text1 = NULL;
  text1 = JS_ToCString(ctx, argv[0]);
  if (text1 == NULL) return JS_EXCEPTION;
  const char text2 = NULL;
  text2 = JS_ToCString(ctx, argv[1]);
  if (text2 == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, TextIsEqual(text1, text2));
}

// TextLength: Get text length, checks for ' 0' ending
static JSValue wrapped_TextLength(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

}

// TextFormat: Text formatting with variables (sprintf style)
static JSValue wrapped_TextFormat(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

}

// TextSubtext: Get a piece of a text string
static JSValue wrapped_TextSubtext(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  int position;
  if (JS_ToInt32(ctx, position, argv[1])) return JS_EXCEPTION;
  int length;
  if (JS_ToInt32(ctx, length, argv[2])) return JS_EXCEPTION;

}

// TextReplace: Replace text string (memory must be freed!)
static JSValue wrapped_TextReplace(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  const char replace = NULL;
  replace = JS_ToCString(ctx, argv[1]);
  if (replace == NULL) return JS_EXCEPTION;
  const char by = NULL;
  by = JS_ToCString(ctx, argv[2]);
  if (by == NULL) return JS_EXCEPTION;

}

// TextInsert: Insert text in a position (memory must be freed!)
static JSValue wrapped_TextInsert(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  const char insert = NULL;
  insert = JS_ToCString(ctx, argv[1]);
  if (insert == NULL) return JS_EXCEPTION;
  int position;
  if (JS_ToInt32(ctx, position, argv[2])) return JS_EXCEPTION;

}

// TextJoin: Join text strings with delimiter
static JSValue wrapped_TextJoin(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char textList = NULL;
  textList = JS_ToCString(ctx, argv[0]);
  if (textList == NULL) return JS_EXCEPTION;
  int count;
  if (JS_ToInt32(ctx, count, argv[1])) return JS_EXCEPTION;
  const char delimiter = NULL;
  delimiter = JS_ToCString(ctx, argv[2]);
  if (delimiter == NULL) return JS_EXCEPTION;

}

// TextSplit: Split text into multiple strings
static JSValue wrapped_TextSplit(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  const char delimiter = NULL;
  delimiter = JS_ToCString(ctx, argv[1]);
  if (delimiter == NULL) return JS_EXCEPTION;
  int count;
  if (JS_ToInt32(ctx, count, argv[2])) return JS_EXCEPTION;

}

// TextAppend: Append text at specific position and move cursor!
static JSValue wrapped_TextAppend(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  const char append = NULL;
  append = JS_ToCString(ctx, argv[1]);
  if (append == NULL) return JS_EXCEPTION;
  int position;
  if (JS_ToInt32(ctx, position, argv[2])) return JS_EXCEPTION;

  TextAppend(text, append, position);
  return JS_UNDEFINED;
}

// TextFindIndex: Find first text occurrence within a string
static JSValue wrapped_TextFindIndex(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  const char find = NULL;
  find = JS_ToCString(ctx, argv[1]);
  if (find == NULL) return JS_EXCEPTION;

}

// TextToUpper: Get upper case version of provided string
static JSValue wrapped_TextToUpper(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

}

// TextToLower: Get lower case version of provided string
static JSValue wrapped_TextToLower(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

}

// TextToPascal: Get Pascal case notation version of provided string
static JSValue wrapped_TextToPascal(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

}

// TextToInteger: Get integer value from text (negative values not supported)
static JSValue wrapped_TextToInteger(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

}

// TextToUtf8: Encode text codepoint into utf8 text (memory must be freed!)
static JSValue wrapped_TextToUtf8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int codepoints;
  if (JS_ToInt32(ctx, codepoints, argv[0])) return JS_EXCEPTION;
  int length;
  if (JS_ToInt32(ctx, length, argv[1])) return JS_EXCEPTION;

}

// GetCodepoints: Get all codepoints in a string, codepoints count returned by parameters
static JSValue wrapped_GetCodepoints(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  int count;
  if (JS_ToInt32(ctx, count, argv[1])) return JS_EXCEPTION;

}

// GetCodepointsCount: Get total number of characters (codepoints) in a UTF8 encoded string
static JSValue wrapped_GetCodepointsCount(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;

}

// GetNextCodepoint: Get next codepoint in a UTF8 encoded string; 0x3f('?') is returned on failure
static JSValue wrapped_GetNextCodepoint(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char text = NULL;
  text = JS_ToCString(ctx, argv[0]);
  if (text == NULL) return JS_EXCEPTION;
  int bytesProcessed;
  if (JS_ToInt32(ctx, bytesProcessed, argv[1])) return JS_EXCEPTION;

}

// CodepointToUtf8: Encode codepoint into utf8 text (char array length returned as parameter)
static JSValue wrapped_CodepointToUtf8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int codepoint;
  if (JS_ToInt32(ctx, codepoint, argv[0])) return JS_EXCEPTION;
  int byteLength;
  if (JS_ToInt32(ctx, byteLength, argv[1])) return JS_EXCEPTION;

}

// DrawLine3D: Draw a line in 3D world space
static JSValue wrapped_DrawLine3D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawLine3D(startPos, endPos, color);
  return JS_UNDEFINED;
}

// DrawPoint3D: Draw a point in 3D space, actually a small line
static JSValue wrapped_DrawPoint3D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawPoint3D(position, color);
  return JS_UNDEFINED;
}

// DrawCircle3D: Draw a circle in 3D world space
static JSValue wrapped_DrawCircle3D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
  return JS_UNDEFINED;
}

// DrawTriangle3D: Draw a color-filled triangle (vertex in counter-clockwise order!)
static JSValue wrapped_DrawTriangle3D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawTriangle3D(v1, v2, v3, color);
  return JS_UNDEFINED;
}

// DrawTriangleStrip3D: Draw a triangle strip defined by points
static JSValue wrapped_DrawTriangleStrip3D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int pointsCount;
  if (JS_ToInt32(ctx, pointsCount, argv[1])) return JS_EXCEPTION;

  DrawTriangleStrip3D(points, pointsCount, color);
  return JS_UNDEFINED;
}

// DrawCube: Draw cube
static JSValue wrapped_DrawCube(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawCube(position, width, height, length, color);
  return JS_UNDEFINED;
}

// DrawCubeV: Draw cube (Vector version)
static JSValue wrapped_DrawCubeV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawCubeV(position, size, color);
  return JS_UNDEFINED;
}

// DrawCubeWires: Draw cube wires
static JSValue wrapped_DrawCubeWires(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawCubeWires(position, width, height, length, color);
  return JS_UNDEFINED;
}

// DrawCubeWiresV: Draw cube wires (Vector version)
static JSValue wrapped_DrawCubeWiresV(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawCubeWiresV(position, size, color);
  return JS_UNDEFINED;
}

// DrawCubeTexture: Draw cube textured
static JSValue wrapped_DrawCubeTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawCubeTexture(texture, position, width, height, length, color);
  return JS_UNDEFINED;
}

// DrawSphere: Draw sphere
static JSValue wrapped_DrawSphere(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawSphere(centerPos, radius, color);
  return JS_UNDEFINED;
}

// DrawSphereEx: Draw sphere with extended parameters
static JSValue wrapped_DrawSphereEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int rings;
  if (JS_ToInt32(ctx, rings, argv[2])) return JS_EXCEPTION;
  int slices;
  if (JS_ToInt32(ctx, slices, argv[3])) return JS_EXCEPTION;

  DrawSphereEx(centerPos, radius, rings, slices, color);
  return JS_UNDEFINED;
}

// DrawSphereWires: Draw sphere wires
static JSValue wrapped_DrawSphereWires(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int rings;
  if (JS_ToInt32(ctx, rings, argv[2])) return JS_EXCEPTION;
  int slices;
  if (JS_ToInt32(ctx, slices, argv[3])) return JS_EXCEPTION;

  DrawSphereWires(centerPos, radius, rings, slices, color);
  return JS_UNDEFINED;
}

// DrawCylinder: Draw a cylinder/cone
static JSValue wrapped_DrawCylinder(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int slices;
  if (JS_ToInt32(ctx, slices, argv[4])) return JS_EXCEPTION;

  DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
  return JS_UNDEFINED;
}

// DrawCylinderWires: Draw a cylinder/cone wires
static JSValue wrapped_DrawCylinderWires(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int slices;
  if (JS_ToInt32(ctx, slices, argv[4])) return JS_EXCEPTION;

  DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
  return JS_UNDEFINED;
}

// DrawPlane: Draw a plane XZ
static JSValue wrapped_DrawPlane(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawPlane(centerPos, size, color);
  return JS_UNDEFINED;
}

// DrawRay: Draw a ray line
static JSValue wrapped_DrawRay(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawRay(ray, color);
  return JS_UNDEFINED;
}

// DrawGrid: Draw a grid (centered at (0, 0, 0))
static JSValue wrapped_DrawGrid(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int slices;
  if (JS_ToInt32(ctx, slices, argv[0])) return JS_EXCEPTION;

  DrawGrid(slices, spacing);
  return JS_UNDEFINED;
}

// LoadModel: Load model from files (meshes and materials)
static JSValue wrapped_LoadModel(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// LoadModelFromMesh: Load model from generated mesh (default material)
static JSValue wrapped_LoadModelFromMesh(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// UnloadModel: Unload model (including meshes) from memory (RAM and/or VRAM)
static JSValue wrapped_UnloadModel(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadModel(model);
  return JS_UNDEFINED;
}

// UnloadModelKeepMeshes: Unload model (but not meshes) from memory (RAM and/or VRAM)
static JSValue wrapped_UnloadModelKeepMeshes(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadModelKeepMeshes(model);
  return JS_UNDEFINED;
}

// UploadMesh: Upload mesh vertex data in GPU and provide VAO/VBO ids
static JSValue wrapped_UploadMesh(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  bool dynamic = JS_ToBool(ctx, argv[1]);

  UploadMesh(mesh, dynamic);
  return JS_UNDEFINED;
}

// UpdateMeshBuffer: Update mesh vertex data in GPU for a specific buffer index
static JSValue wrapped_UpdateMeshBuffer(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int index;
  if (JS_ToInt32(ctx, index, argv[1])) return JS_EXCEPTION;
  int dataSize;
  if (JS_ToInt32(ctx, dataSize, argv[3])) return JS_EXCEPTION;
  int offset;
  if (JS_ToInt32(ctx, offset, argv[4])) return JS_EXCEPTION;

  UpdateMeshBuffer(mesh, index, data, dataSize, offset);
  return JS_UNDEFINED;
}

// DrawMesh: Draw a 3d mesh with material and transform
static JSValue wrapped_DrawMesh(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawMesh(mesh, material, transform);
  return JS_UNDEFINED;
}

// DrawMeshInstanced: Draw multiple mesh instances with material and different transforms
static JSValue wrapped_DrawMeshInstanced(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int instances;
  if (JS_ToInt32(ctx, instances, argv[3])) return JS_EXCEPTION;

  DrawMeshInstanced(mesh, material, transforms, instances);
  return JS_UNDEFINED;
}

// UnloadMesh: Unload mesh data from CPU and GPU
static JSValue wrapped_UnloadMesh(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadMesh(mesh);
  return JS_UNDEFINED;
}

// ExportMesh: Export mesh data to file, returns true on success
static JSValue wrapped_ExportMesh(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[1]);
  if (fileName == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, ExportMesh(mesh, fileName));
}

// LoadMaterials: Load materials from model file
static JSValue wrapped_LoadMaterials(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;
  int materialCount;
  if (JS_ToInt32(ctx, materialCount, argv[1])) return JS_EXCEPTION;

}

// LoadMaterialDefault: Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
static JSValue wrapped_LoadMaterialDefault(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// UnloadMaterial: Unload material from GPU memory (VRAM)
static JSValue wrapped_UnloadMaterial(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadMaterial(material);
  return JS_UNDEFINED;
}

// SetMaterialTexture: Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
static JSValue wrapped_SetMaterialTexture(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int mapType;
  if (JS_ToInt32(ctx, mapType, argv[1])) return JS_EXCEPTION;

  SetMaterialTexture(material, mapType, texture);
  return JS_UNDEFINED;
}

// SetModelMeshMaterial: Set material for a mesh
static JSValue wrapped_SetModelMeshMaterial(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int meshId;
  if (JS_ToInt32(ctx, meshId, argv[1])) return JS_EXCEPTION;
  int materialId;
  if (JS_ToInt32(ctx, materialId, argv[2])) return JS_EXCEPTION;

  SetModelMeshMaterial(model, meshId, materialId);
  return JS_UNDEFINED;
}

// LoadModelAnimations: Load model animations from file
static JSValue wrapped_LoadModelAnimations(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;
  int animsCount;
  if (JS_ToInt32(ctx, animsCount, argv[1])) return JS_EXCEPTION;

}

// UpdateModelAnimation: Update model animation pose
static JSValue wrapped_UpdateModelAnimation(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int frame;
  if (JS_ToInt32(ctx, frame, argv[2])) return JS_EXCEPTION;

  UpdateModelAnimation(model, anim, frame);
  return JS_UNDEFINED;
}

// UnloadModelAnimation: Unload animation data
static JSValue wrapped_UnloadModelAnimation(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadModelAnimation(anim);
  return JS_UNDEFINED;
}

// UnloadModelAnimations: Unload animation array data
static JSValue wrapped_UnloadModelAnimations(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadModelAnimations(animations, count);
  return JS_UNDEFINED;
}

// IsModelAnimationValid: Check model animation skeleton match
static JSValue wrapped_IsModelAnimationValid(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsModelAnimationValid(model, anim));
}

// GenMeshPoly: Generate polygonal mesh
static JSValue wrapped_GenMeshPoly(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int sides;
  if (JS_ToInt32(ctx, sides, argv[0])) return JS_EXCEPTION;

}

// GenMeshPlane: Generate plane mesh (with subdivisions)
static JSValue wrapped_GenMeshPlane(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int resX;
  if (JS_ToInt32(ctx, resX, argv[2])) return JS_EXCEPTION;
  int resZ;
  if (JS_ToInt32(ctx, resZ, argv[3])) return JS_EXCEPTION;

}

// GenMeshCube: Generate cuboid mesh
static JSValue wrapped_GenMeshCube(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GenMeshSphere: Generate sphere mesh (standard sphere)
static JSValue wrapped_GenMeshSphere(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int rings;
  if (JS_ToInt32(ctx, rings, argv[1])) return JS_EXCEPTION;
  int slices;
  if (JS_ToInt32(ctx, slices, argv[2])) return JS_EXCEPTION;

}

// GenMeshHemiSphere: Generate half-sphere mesh (no bottom cap)
static JSValue wrapped_GenMeshHemiSphere(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int rings;
  if (JS_ToInt32(ctx, rings, argv[1])) return JS_EXCEPTION;
  int slices;
  if (JS_ToInt32(ctx, slices, argv[2])) return JS_EXCEPTION;

}

// GenMeshCylinder: Generate cylinder mesh
static JSValue wrapped_GenMeshCylinder(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int slices;
  if (JS_ToInt32(ctx, slices, argv[2])) return JS_EXCEPTION;

}

// GenMeshTorus: Generate torus mesh
static JSValue wrapped_GenMeshTorus(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int radSeg;
  if (JS_ToInt32(ctx, radSeg, argv[2])) return JS_EXCEPTION;
  int sides;
  if (JS_ToInt32(ctx, sides, argv[3])) return JS_EXCEPTION;

}

// GenMeshKnot: Generate trefoil knot mesh
static JSValue wrapped_GenMeshKnot(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int radSeg;
  if (JS_ToInt32(ctx, radSeg, argv[2])) return JS_EXCEPTION;
  int sides;
  if (JS_ToInt32(ctx, sides, argv[3])) return JS_EXCEPTION;

}

// GenMeshHeightmap: Generate heightmap mesh from image data
static JSValue wrapped_GenMeshHeightmap(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GenMeshCubicmap: Generate cubes-based map mesh from image data
static JSValue wrapped_GenMeshCubicmap(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetMeshBoundingBox: Compute mesh bounding box limits
static JSValue wrapped_GetMeshBoundingBox(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// MeshTangents: Compute mesh tangents
static JSValue wrapped_MeshTangents(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  MeshTangents(mesh);
  return JS_UNDEFINED;
}

// MeshBinormals: Compute mesh binormals
static JSValue wrapped_MeshBinormals(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  MeshBinormals(mesh);
  return JS_UNDEFINED;
}

// DrawModel: Draw a model (with texture if set)
static JSValue wrapped_DrawModel(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawModel(model, position, scale, tint);
  return JS_UNDEFINED;
}

// DrawModelEx: Draw a model with extended parameters
static JSValue wrapped_DrawModelEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);
  return JS_UNDEFINED;
}

// DrawModelWires: Draw a model wires (with texture if set)
static JSValue wrapped_DrawModelWires(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawModelWires(model, position, scale, tint);
  return JS_UNDEFINED;
}

// DrawModelWiresEx: Draw a model wires (with texture if set) with extended parameters
static JSValue wrapped_DrawModelWiresEx(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
  return JS_UNDEFINED;
}

// DrawBoundingBox: Draw bounding box (wires)
static JSValue wrapped_DrawBoundingBox(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawBoundingBox(box, color);
  return JS_UNDEFINED;
}

// DrawBillboard: Draw a billboard texture
static JSValue wrapped_DrawBillboard(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawBillboard(camera, texture, position, size, tint);
  return JS_UNDEFINED;
}

// DrawBillboardRec: Draw a billboard texture defined by source
static JSValue wrapped_DrawBillboardRec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawBillboardRec(camera, texture, source, position, size, tint);
  return JS_UNDEFINED;
}

// DrawBillboardPro: Draw a billboard texture defined by source and rotation
static JSValue wrapped_DrawBillboardPro(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  DrawBillboardPro(camera, texture, source, position, size, origin, rotation, tint);
  return JS_UNDEFINED;
}

// CheckCollisionSpheres: Check collision between two spheres
static JSValue wrapped_CheckCollisionSpheres(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionSpheres(center1, radius1, center2, radius2));
}

// CheckCollisionBoxes: Check collision between two bounding boxes
static JSValue wrapped_CheckCollisionBoxes(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionBoxes(box1, box2));
}

// CheckCollisionBoxSphere: Check collision between box and sphere
static JSValue wrapped_CheckCollisionBoxSphere(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, CheckCollisionBoxSphere(box, center, radius));
}

// GetRayCollisionSphere: Get collision info between ray and sphere
static JSValue wrapped_GetRayCollisionSphere(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetRayCollisionBox: Get collision info between ray and box
static JSValue wrapped_GetRayCollisionBox(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetRayCollisionModel: Get collision info between ray and model
static JSValue wrapped_GetRayCollisionModel(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetRayCollisionMesh: Get collision info between ray and mesh
static JSValue wrapped_GetRayCollisionMesh(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetRayCollisionTriangle: Get collision info between ray and triangle
static JSValue wrapped_GetRayCollisionTriangle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// GetRayCollisionQuad: Get collision info between ray and quad
static JSValue wrapped_GetRayCollisionQuad(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// InitAudioDevice: Initialize audio device and context
static JSValue wrapped_InitAudioDevice(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  InitAudioDevice();
  return JS_UNDEFINED;
}

// CloseAudioDevice: Close the audio device and context
static JSValue wrapped_CloseAudioDevice(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  CloseAudioDevice();
  return JS_UNDEFINED;
}

// IsAudioDeviceReady: Check if audio device has been initialized successfully
static JSValue wrapped_IsAudioDeviceReady(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsAudioDeviceReady());
}

// SetMasterVolume: Set master volume (listener)
static JSValue wrapped_SetMasterVolume(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetMasterVolume(volume);
  return JS_UNDEFINED;
}

// LoadWave: Load wave data from file
static JSValue wrapped_LoadWave(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// LoadWaveFromMemory: Load wave from memory buffer, fileType refers to extension: i.e. '.wav'
static JSValue wrapped_LoadWaveFromMemory(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileType = NULL;
  fileType = JS_ToCString(ctx, argv[0]);
  if (fileType == NULL) return JS_EXCEPTION;
  int dataSize;
  if (JS_ToInt32(ctx, dataSize, argv[2])) return JS_EXCEPTION;

}

// LoadSound: Load sound from file
static JSValue wrapped_LoadSound(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// LoadSoundFromWave: Load sound from wave data
static JSValue wrapped_LoadSoundFromWave(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// UpdateSound: Update sound buffer with new data
static JSValue wrapped_UpdateSound(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int samplesCount;
  if (JS_ToInt32(ctx, samplesCount, argv[2])) return JS_EXCEPTION;

  UpdateSound(sound, data, samplesCount);
  return JS_UNDEFINED;
}

// UnloadWave: Unload wave data
static JSValue wrapped_UnloadWave(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadWave(wave);
  return JS_UNDEFINED;
}

// UnloadSound: Unload sound
static JSValue wrapped_UnloadSound(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadSound(sound);
  return JS_UNDEFINED;
}

// ExportWave: Export wave data to file, returns true on success
static JSValue wrapped_ExportWave(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[1]);
  if (fileName == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, ExportWave(wave, fileName));
}

// ExportWaveAsCode: Export wave sample data to code (.h), returns true on success
static JSValue wrapped_ExportWaveAsCode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[1]);
  if (fileName == NULL) return JS_EXCEPTION;

  return JS_NewBool(ctx, ExportWaveAsCode(wave, fileName));
}

// PlaySound: Play a sound
static JSValue wrapped_PlaySound(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  PlaySound(sound);
  return JS_UNDEFINED;
}

// StopSound: Stop playing a sound
static JSValue wrapped_StopSound(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  StopSound(sound);
  return JS_UNDEFINED;
}

// PauseSound: Pause a sound
static JSValue wrapped_PauseSound(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  PauseSound(sound);
  return JS_UNDEFINED;
}

// ResumeSound: Resume a paused sound
static JSValue wrapped_ResumeSound(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ResumeSound(sound);
  return JS_UNDEFINED;
}

// PlaySoundMulti: Play a sound (using multichannel buffer pool)
static JSValue wrapped_PlaySoundMulti(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  PlaySoundMulti(sound);
  return JS_UNDEFINED;
}

// StopSoundMulti: Stop any sound playing (using multichannel buffer pool)
static JSValue wrapped_StopSoundMulti(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  StopSoundMulti();
  return JS_UNDEFINED;
}

// GetSoundsPlaying: Get number of sounds playing in the multichannel
static JSValue wrapped_GetSoundsPlaying(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// IsSoundPlaying: Check if a sound is currently playing
static JSValue wrapped_IsSoundPlaying(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsSoundPlaying(sound));
}

// SetSoundVolume: Set volume for a sound (1.0 is max level)
static JSValue wrapped_SetSoundVolume(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetSoundVolume(sound, volume);
  return JS_UNDEFINED;
}

// SetSoundPitch: Set pitch for a sound (1.0 is base level)
static JSValue wrapped_SetSoundPitch(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetSoundPitch(sound, pitch);
  return JS_UNDEFINED;
}

// WaveFormat: Convert wave data to desired format
static JSValue wrapped_WaveFormat(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int sampleRate;
  if (JS_ToInt32(ctx, sampleRate, argv[1])) return JS_EXCEPTION;
  int sampleSize;
  if (JS_ToInt32(ctx, sampleSize, argv[2])) return JS_EXCEPTION;
  int channels;
  if (JS_ToInt32(ctx, channels, argv[3])) return JS_EXCEPTION;

  WaveFormat(wave, sampleRate, sampleSize, channels);
  return JS_UNDEFINED;
}

// WaveCopy: Copy a wave to a new wave
static JSValue wrapped_WaveCopy(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// WaveCrop: Crop a wave to defined samples range
static JSValue wrapped_WaveCrop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int initSample;
  if (JS_ToInt32(ctx, initSample, argv[1])) return JS_EXCEPTION;
  int finalSample;
  if (JS_ToInt32(ctx, finalSample, argv[2])) return JS_EXCEPTION;

  WaveCrop(wave, initSample, finalSample);
  return JS_UNDEFINED;
}

// LoadWaveSamples: Load samples data from wave as a floats array
static JSValue wrapped_LoadWaveSamples(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, &LoadWaveSamples(wave));
}

// UnloadWaveSamples: Unload samples data loaded with LoadWaveSamples()
static JSValue wrapped_UnloadWaveSamples(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadWaveSamples(samples);
  return JS_UNDEFINED;
}

// LoadMusicStream: Load music stream from file
static JSValue wrapped_LoadMusicStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileName = NULL;
  fileName = JS_ToCString(ctx, argv[0]);
  if (fileName == NULL) return JS_EXCEPTION;

}

// LoadMusicStreamFromMemory: Load music stream from data
static JSValue wrapped_LoadMusicStreamFromMemory(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  const char fileType = NULL;
  fileType = JS_ToCString(ctx, argv[0]);
  if (fileType == NULL) return JS_EXCEPTION;
  int dataSize;
  if (JS_ToInt32(ctx, dataSize, argv[2])) return JS_EXCEPTION;

}

// UnloadMusicStream: Unload music stream
static JSValue wrapped_UnloadMusicStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadMusicStream(music);
  return JS_UNDEFINED;
}

// PlayMusicStream: Start music playing
static JSValue wrapped_PlayMusicStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  PlayMusicStream(music);
  return JS_UNDEFINED;
}

// IsMusicStreamPlaying: Check if music is playing
static JSValue wrapped_IsMusicStreamPlaying(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsMusicStreamPlaying(music));
}

// UpdateMusicStream: Updates buffers for music streaming
static JSValue wrapped_UpdateMusicStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UpdateMusicStream(music);
  return JS_UNDEFINED;
}

// StopMusicStream: Stop music playing
static JSValue wrapped_StopMusicStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  StopMusicStream(music);
  return JS_UNDEFINED;
}

// PauseMusicStream: Pause music playing
static JSValue wrapped_PauseMusicStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  PauseMusicStream(music);
  return JS_UNDEFINED;
}

// ResumeMusicStream: Resume playing paused music
static JSValue wrapped_ResumeMusicStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ResumeMusicStream(music);
  return JS_UNDEFINED;
}

// SetMusicVolume: Set volume for music (1.0 is max level)
static JSValue wrapped_SetMusicVolume(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetMusicVolume(music, volume);
  return JS_UNDEFINED;
}

// SetMusicPitch: Set pitch for a music (1.0 is base level)
static JSValue wrapped_SetMusicPitch(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetMusicPitch(music, pitch);
  return JS_UNDEFINED;
}

// GetMusicTimeLength: Get music time length (in seconds)
static JSValue wrapped_GetMusicTimeLength(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, GetMusicTimeLength(music));
}

// GetMusicTimePlayed: Get current music time played (in seconds)
static JSValue wrapped_GetMusicTimePlayed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewFloat64(ctx, GetMusicTimePlayed(music));
}

// LoadAudioStream: Load audio stream (to stream raw audio pcm data)
static JSValue wrapped_LoadAudioStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

}

// UnloadAudioStream: Unload audio stream and free memory
static JSValue wrapped_UnloadAudioStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  UnloadAudioStream(stream);
  return JS_UNDEFINED;
}

// UpdateAudioStream: Update audio stream buffers with data
static JSValue wrapped_UpdateAudioStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int samplesCount;
  if (JS_ToInt32(ctx, samplesCount, argv[2])) return JS_EXCEPTION;

  UpdateAudioStream(stream, data, samplesCount);
  return JS_UNDEFINED;
}

// IsAudioStreamProcessed: Check if any audio stream buffers requires refill
static JSValue wrapped_IsAudioStreamProcessed(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsAudioStreamProcessed(stream));
}

// PlayAudioStream: Play audio stream
static JSValue wrapped_PlayAudioStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  PlayAudioStream(stream);
  return JS_UNDEFINED;
}

// PauseAudioStream: Pause audio stream
static JSValue wrapped_PauseAudioStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  PauseAudioStream(stream);
  return JS_UNDEFINED;
}

// ResumeAudioStream: Resume audio stream
static JSValue wrapped_ResumeAudioStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  ResumeAudioStream(stream);
  return JS_UNDEFINED;
}

// IsAudioStreamPlaying: Check if audio stream is playing
static JSValue wrapped_IsAudioStreamPlaying(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  return JS_NewBool(ctx, IsAudioStreamPlaying(stream));
}

// StopAudioStream: Stop audio stream
static JSValue wrapped_StopAudioStream(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  StopAudioStream(stream);
  return JS_UNDEFINED;
}

// SetAudioStreamVolume: Set volume for audio stream (1.0 is max level)
static JSValue wrapped_SetAudioStreamVolume(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetAudioStreamVolume(stream, volume);
  return JS_UNDEFINED;
}

// SetAudioStreamPitch: Set pitch for audio stream (1.0 is base level)
static JSValue wrapped_SetAudioStreamPitch(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {

  SetAudioStreamPitch(stream, pitch);
  return JS_UNDEFINED;
}

// SetAudioStreamBufferSizeDefault: Default size for new audio streams
static JSValue wrapped_SetAudioStreamBufferSizeDefault(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int size;
  if (JS_ToInt32(ctx, size, argv[0])) return JS_EXCEPTION;

  SetAudioStreamBufferSizeDefault(size);
  return JS_UNDEFINED;
}


static const JSCFunctionListEntry wrapped_js_funcs[] = {
  JS_CFUNC_DEF("InitWindow", 3, wrapped_InitWindow),
  JS_CFUNC_DEF("WindowShouldClose", 0, wrapped_WindowShouldClose),
  JS_CFUNC_DEF("CloseWindow", 0, wrapped_CloseWindow),
  JS_CFUNC_DEF("IsWindowReady", 0, wrapped_IsWindowReady),
  JS_CFUNC_DEF("IsWindowFullscreen", 0, wrapped_IsWindowFullscreen),
  JS_CFUNC_DEF("IsWindowHidden", 0, wrapped_IsWindowHidden),
  JS_CFUNC_DEF("IsWindowMinimized", 0, wrapped_IsWindowMinimized),
  JS_CFUNC_DEF("IsWindowMaximized", 0, wrapped_IsWindowMaximized),
  JS_CFUNC_DEF("IsWindowFocused", 0, wrapped_IsWindowFocused),
  JS_CFUNC_DEF("IsWindowResized", 0, wrapped_IsWindowResized),
  JS_CFUNC_DEF("IsWindowState", 1, wrapped_IsWindowState),
  JS_CFUNC_DEF("SetWindowState", 1, wrapped_SetWindowState),
  JS_CFUNC_DEF("ClearWindowState", 1, wrapped_ClearWindowState),
  JS_CFUNC_DEF("ToggleFullscreen", 0, wrapped_ToggleFullscreen),
  JS_CFUNC_DEF("MaximizeWindow", 0, wrapped_MaximizeWindow),
  JS_CFUNC_DEF("MinimizeWindow", 0, wrapped_MinimizeWindow),
  JS_CFUNC_DEF("RestoreWindow", 0, wrapped_RestoreWindow),
  JS_CFUNC_DEF("SetWindowIcon", 1, wrapped_SetWindowIcon),
  JS_CFUNC_DEF("SetWindowTitle", 1, wrapped_SetWindowTitle),
  JS_CFUNC_DEF("SetWindowPosition", 2, wrapped_SetWindowPosition),
  JS_CFUNC_DEF("SetWindowMonitor", 1, wrapped_SetWindowMonitor),
  JS_CFUNC_DEF("SetWindowMinSize", 2, wrapped_SetWindowMinSize),
  JS_CFUNC_DEF("SetWindowSize", 2, wrapped_SetWindowSize),
  JS_CFUNC_DEF("GetWindowHandle", 0, wrapped_GetWindowHandle),
  JS_CFUNC_DEF("GetScreenWidth", 0, wrapped_GetScreenWidth),
  JS_CFUNC_DEF("GetScreenHeight", 0, wrapped_GetScreenHeight),
  JS_CFUNC_DEF("GetMonitorCount", 0, wrapped_GetMonitorCount),
  JS_CFUNC_DEF("GetCurrentMonitor", 0, wrapped_GetCurrentMonitor),
  JS_CFUNC_DEF("GetMonitorPosition", 1, wrapped_GetMonitorPosition),
  JS_CFUNC_DEF("GetMonitorWidth", 1, wrapped_GetMonitorWidth),
  JS_CFUNC_DEF("GetMonitorHeight", 1, wrapped_GetMonitorHeight),
  JS_CFUNC_DEF("GetMonitorPhysicalWidth", 1, wrapped_GetMonitorPhysicalWidth),
  JS_CFUNC_DEF("GetMonitorPhysicalHeight", 1, wrapped_GetMonitorPhysicalHeight),
  JS_CFUNC_DEF("GetMonitorRefreshRate", 1, wrapped_GetMonitorRefreshRate),
  JS_CFUNC_DEF("GetWindowPosition", 0, wrapped_GetWindowPosition),
  JS_CFUNC_DEF("GetWindowScaleDPI", 0, wrapped_GetWindowScaleDPI),
  JS_CFUNC_DEF("GetMonitorName", 1, wrapped_GetMonitorName),
  JS_CFUNC_DEF("SetClipboardText", 1, wrapped_SetClipboardText),
  JS_CFUNC_DEF("GetClipboardText", 0, wrapped_GetClipboardText),
  JS_CFUNC_DEF("ShowCursor", 0, wrapped_ShowCursor),
  JS_CFUNC_DEF("HideCursor", 0, wrapped_HideCursor),
  JS_CFUNC_DEF("IsCursorHidden", 0, wrapped_IsCursorHidden),
  JS_CFUNC_DEF("EnableCursor", 0, wrapped_EnableCursor),
  JS_CFUNC_DEF("DisableCursor", 0, wrapped_DisableCursor),
  JS_CFUNC_DEF("IsCursorOnScreen", 0, wrapped_IsCursorOnScreen),
  JS_CFUNC_DEF("ClearBackground", 1, wrapped_ClearBackground),
  JS_CFUNC_DEF("BeginDrawing", 0, wrapped_BeginDrawing),
  JS_CFUNC_DEF("EndDrawing", 0, wrapped_EndDrawing),
  JS_CFUNC_DEF("BeginMode2D", 1, wrapped_BeginMode2D),
  JS_CFUNC_DEF("EndMode2D", 0, wrapped_EndMode2D),
  JS_CFUNC_DEF("BeginMode3D", 1, wrapped_BeginMode3D),
  JS_CFUNC_DEF("EndMode3D", 0, wrapped_EndMode3D),
  JS_CFUNC_DEF("BeginTextureMode", 1, wrapped_BeginTextureMode),
  JS_CFUNC_DEF("EndTextureMode", 0, wrapped_EndTextureMode),
  JS_CFUNC_DEF("BeginShaderMode", 1, wrapped_BeginShaderMode),
  JS_CFUNC_DEF("EndShaderMode", 0, wrapped_EndShaderMode),
  JS_CFUNC_DEF("BeginBlendMode", 1, wrapped_BeginBlendMode),
  JS_CFUNC_DEF("EndBlendMode", 0, wrapped_EndBlendMode),
  JS_CFUNC_DEF("BeginScissorMode", 4, wrapped_BeginScissorMode),
  JS_CFUNC_DEF("EndScissorMode", 0, wrapped_EndScissorMode),
  JS_CFUNC_DEF("BeginVrStereoMode", 1, wrapped_BeginVrStereoMode),
  JS_CFUNC_DEF("EndVrStereoMode", 0, wrapped_EndVrStereoMode),
  JS_CFUNC_DEF("LoadVrStereoConfig", 1, wrapped_LoadVrStereoConfig),
  JS_CFUNC_DEF("UnloadVrStereoConfig", 1, wrapped_UnloadVrStereoConfig),
  JS_CFUNC_DEF("LoadShader", 2, wrapped_LoadShader),
  JS_CFUNC_DEF("LoadShaderFromMemory", 2, wrapped_LoadShaderFromMemory),
  JS_CFUNC_DEF("GetShaderLocation", 2, wrapped_GetShaderLocation),
  JS_CFUNC_DEF("GetShaderLocationAttrib", 2, wrapped_GetShaderLocationAttrib),
  JS_CFUNC_DEF("SetShaderValue", 4, wrapped_SetShaderValue),
  JS_CFUNC_DEF("SetShaderValueV", 5, wrapped_SetShaderValueV),
  JS_CFUNC_DEF("SetShaderValueMatrix", 3, wrapped_SetShaderValueMatrix),
  JS_CFUNC_DEF("SetShaderValueTexture", 3, wrapped_SetShaderValueTexture),
  JS_CFUNC_DEF("UnloadShader", 1, wrapped_UnloadShader),
  JS_CFUNC_DEF("GetMouseRay", 2, wrapped_GetMouseRay),
  JS_CFUNC_DEF("GetCameraMatrix", 1, wrapped_GetCameraMatrix),
  JS_CFUNC_DEF("GetCameraMatrix2D", 1, wrapped_GetCameraMatrix2D),
  JS_CFUNC_DEF("GetWorldToScreen", 2, wrapped_GetWorldToScreen),
  JS_CFUNC_DEF("GetWorldToScreenEx", 4, wrapped_GetWorldToScreenEx),
  JS_CFUNC_DEF("GetWorldToScreen2D", 2, wrapped_GetWorldToScreen2D),
  JS_CFUNC_DEF("GetScreenToWorld2D", 2, wrapped_GetScreenToWorld2D),
  JS_CFUNC_DEF("SetTargetFPS", 1, wrapped_SetTargetFPS),
  JS_CFUNC_DEF("GetFPS", 0, wrapped_GetFPS),
  JS_CFUNC_DEF("GetFrameTime", 0, wrapped_GetFrameTime),
  JS_CFUNC_DEF("GetTime", 0, wrapped_GetTime),
  JS_CFUNC_DEF("GetRandomValue", 2, wrapped_GetRandomValue),
  JS_CFUNC_DEF("TakeScreenshot", 1, wrapped_TakeScreenshot),
  JS_CFUNC_DEF("SetConfigFlags", 1, wrapped_SetConfigFlags),
  JS_CFUNC_DEF("TraceLog", 3, wrapped_TraceLog),
  JS_CFUNC_DEF("SetTraceLogLevel", 1, wrapped_SetTraceLogLevel),
  JS_CFUNC_DEF("MemAlloc", 1, wrapped_MemAlloc),
  JS_CFUNC_DEF("MemRealloc", 2, wrapped_MemRealloc),
  JS_CFUNC_DEF("MemFree", 1, wrapped_MemFree),
  JS_CFUNC_DEF("SetTraceLogCallback", 1, wrapped_SetTraceLogCallback),
  JS_CFUNC_DEF("SetLoadFileDataCallback", 1, wrapped_SetLoadFileDataCallback),
  JS_CFUNC_DEF("SetSaveFileDataCallback", 1, wrapped_SetSaveFileDataCallback),
  JS_CFUNC_DEF("SetLoadFileTextCallback", 1, wrapped_SetLoadFileTextCallback),
  JS_CFUNC_DEF("SetSaveFileTextCallback", 1, wrapped_SetSaveFileTextCallback),
  JS_CFUNC_DEF("LoadFileData", 2, wrapped_LoadFileData),
  JS_CFUNC_DEF("UnloadFileData", 1, wrapped_UnloadFileData),
  JS_CFUNC_DEF("SaveFileData", 3, wrapped_SaveFileData),
  JS_CFUNC_DEF("LoadFileText", 1, wrapped_LoadFileText),
  JS_CFUNC_DEF("UnloadFileText", 1, wrapped_UnloadFileText),
  JS_CFUNC_DEF("SaveFileText", 2, wrapped_SaveFileText),
  JS_CFUNC_DEF("FileExists", 1, wrapped_FileExists),
  JS_CFUNC_DEF("DirectoryExists", 1, wrapped_DirectoryExists),
  JS_CFUNC_DEF("IsFileExtension", 2, wrapped_IsFileExtension),
  JS_CFUNC_DEF("GetFileExtension", 1, wrapped_GetFileExtension),
  JS_CFUNC_DEF("GetFileName", 1, wrapped_GetFileName),
  JS_CFUNC_DEF("GetFileNameWithoutExt", 1, wrapped_GetFileNameWithoutExt),
  JS_CFUNC_DEF("GetDirectoryPath", 1, wrapped_GetDirectoryPath),
  JS_CFUNC_DEF("GetPrevDirectoryPath", 1, wrapped_GetPrevDirectoryPath),
  JS_CFUNC_DEF("GetWorkingDirectory", 0, wrapped_GetWorkingDirectory),
  JS_CFUNC_DEF("GetDirectoryFiles", 2, wrapped_GetDirectoryFiles),
  JS_CFUNC_DEF("ClearDirectoryFiles", 0, wrapped_ClearDirectoryFiles),
  JS_CFUNC_DEF("ChangeDirectory", 1, wrapped_ChangeDirectory),
  JS_CFUNC_DEF("IsFileDropped", 0, wrapped_IsFileDropped),
  JS_CFUNC_DEF("GetDroppedFiles", 1, wrapped_GetDroppedFiles),
  JS_CFUNC_DEF("ClearDroppedFiles", 0, wrapped_ClearDroppedFiles),
  JS_CFUNC_DEF("GetFileModTime", 1, wrapped_GetFileModTime),
  JS_CFUNC_DEF("CompressData", 3, wrapped_CompressData),
  JS_CFUNC_DEF("DecompressData", 3, wrapped_DecompressData),
  JS_CFUNC_DEF("SaveStorageValue", 2, wrapped_SaveStorageValue),
  JS_CFUNC_DEF("LoadStorageValue", 1, wrapped_LoadStorageValue),
  JS_CFUNC_DEF("OpenURL", 1, wrapped_OpenURL),
  JS_CFUNC_DEF("IsKeyPressed", 1, wrapped_IsKeyPressed),
  JS_CFUNC_DEF("IsKeyDown", 1, wrapped_IsKeyDown),
  JS_CFUNC_DEF("IsKeyReleased", 1, wrapped_IsKeyReleased),
  JS_CFUNC_DEF("IsKeyUp", 1, wrapped_IsKeyUp),
  JS_CFUNC_DEF("SetExitKey", 1, wrapped_SetExitKey),
  JS_CFUNC_DEF("GetKeyPressed", 0, wrapped_GetKeyPressed),
  JS_CFUNC_DEF("GetCharPressed", 0, wrapped_GetCharPressed),
  JS_CFUNC_DEF("IsGamepadAvailable", 1, wrapped_IsGamepadAvailable),
  JS_CFUNC_DEF("IsGamepadName", 2, wrapped_IsGamepadName),
  JS_CFUNC_DEF("GetGamepadName", 1, wrapped_GetGamepadName),
  JS_CFUNC_DEF("IsGamepadButtonPressed", 2, wrapped_IsGamepadButtonPressed),
  JS_CFUNC_DEF("IsGamepadButtonDown", 2, wrapped_IsGamepadButtonDown),
  JS_CFUNC_DEF("IsGamepadButtonReleased", 2, wrapped_IsGamepadButtonReleased),
  JS_CFUNC_DEF("IsGamepadButtonUp", 2, wrapped_IsGamepadButtonUp),
  JS_CFUNC_DEF("GetGamepadButtonPressed", 0, wrapped_GetGamepadButtonPressed),
  JS_CFUNC_DEF("GetGamepadAxisCount", 1, wrapped_GetGamepadAxisCount),
  JS_CFUNC_DEF("GetGamepadAxisMovement", 2, wrapped_GetGamepadAxisMovement),
  JS_CFUNC_DEF("SetGamepadMappings", 1, wrapped_SetGamepadMappings),
  JS_CFUNC_DEF("IsMouseButtonPressed", 1, wrapped_IsMouseButtonPressed),
  JS_CFUNC_DEF("IsMouseButtonDown", 1, wrapped_IsMouseButtonDown),
  JS_CFUNC_DEF("IsMouseButtonReleased", 1, wrapped_IsMouseButtonReleased),
  JS_CFUNC_DEF("IsMouseButtonUp", 1, wrapped_IsMouseButtonUp),
  JS_CFUNC_DEF("GetMouseX", 0, wrapped_GetMouseX),
  JS_CFUNC_DEF("GetMouseY", 0, wrapped_GetMouseY),
  JS_CFUNC_DEF("GetMousePosition", 0, wrapped_GetMousePosition),
  JS_CFUNC_DEF("SetMousePosition", 2, wrapped_SetMousePosition),
  JS_CFUNC_DEF("SetMouseOffset", 2, wrapped_SetMouseOffset),
  JS_CFUNC_DEF("SetMouseScale", 2, wrapped_SetMouseScale),
  JS_CFUNC_DEF("GetMouseWheelMove", 0, wrapped_GetMouseWheelMove),
  JS_CFUNC_DEF("SetMouseCursor", 1, wrapped_SetMouseCursor),
  JS_CFUNC_DEF("GetTouchX", 0, wrapped_GetTouchX),
  JS_CFUNC_DEF("GetTouchY", 0, wrapped_GetTouchY),
  JS_CFUNC_DEF("GetTouchPosition", 1, wrapped_GetTouchPosition),
  JS_CFUNC_DEF("SetGesturesEnabled", 1, wrapped_SetGesturesEnabled),
  JS_CFUNC_DEF("IsGestureDetected", 1, wrapped_IsGestureDetected),
  JS_CFUNC_DEF("GetGestureDetected", 0, wrapped_GetGestureDetected),
  JS_CFUNC_DEF("GetTouchPointsCount", 0, wrapped_GetTouchPointsCount),
  JS_CFUNC_DEF("GetGestureHoldDuration", 0, wrapped_GetGestureHoldDuration),
  JS_CFUNC_DEF("GetGestureDragVector", 0, wrapped_GetGestureDragVector),
  JS_CFUNC_DEF("GetGestureDragAngle", 0, wrapped_GetGestureDragAngle),
  JS_CFUNC_DEF("GetGesturePinchVector", 0, wrapped_GetGesturePinchVector),
  JS_CFUNC_DEF("GetGesturePinchAngle", 0, wrapped_GetGesturePinchAngle),
  JS_CFUNC_DEF("SetCameraMode", 2, wrapped_SetCameraMode),
  JS_CFUNC_DEF("UpdateCamera", 1, wrapped_UpdateCamera),
  JS_CFUNC_DEF("SetCameraPanControl", 1, wrapped_SetCameraPanControl),
  JS_CFUNC_DEF("SetCameraAltControl", 1, wrapped_SetCameraAltControl),
  JS_CFUNC_DEF("SetCameraSmoothZoomControl", 1, wrapped_SetCameraSmoothZoomControl),
  JS_CFUNC_DEF("SetCameraMoveControls", 6, wrapped_SetCameraMoveControls),
  JS_CFUNC_DEF("SetShapesTexture", 2, wrapped_SetShapesTexture),
  JS_CFUNC_DEF("DrawPixel", 3, wrapped_DrawPixel),
  JS_CFUNC_DEF("DrawPixelV", 2, wrapped_DrawPixelV),
  JS_CFUNC_DEF("DrawLine", 5, wrapped_DrawLine),
  JS_CFUNC_DEF("DrawLineV", 3, wrapped_DrawLineV),
  JS_CFUNC_DEF("DrawLineEx", 4, wrapped_DrawLineEx),
  JS_CFUNC_DEF("DrawLineBezier", 4, wrapped_DrawLineBezier),
  JS_CFUNC_DEF("DrawLineBezierQuad", 5, wrapped_DrawLineBezierQuad),
  JS_CFUNC_DEF("DrawLineStrip", 3, wrapped_DrawLineStrip),
  JS_CFUNC_DEF("DrawCircle", 4, wrapped_DrawCircle),
  JS_CFUNC_DEF("DrawCircleSector", 6, wrapped_DrawCircleSector),
  JS_CFUNC_DEF("DrawCircleSectorLines", 6, wrapped_DrawCircleSectorLines),
  JS_CFUNC_DEF("DrawCircleGradient", 5, wrapped_DrawCircleGradient),
  JS_CFUNC_DEF("DrawCircleV", 3, wrapped_DrawCircleV),
  JS_CFUNC_DEF("DrawCircleLines", 4, wrapped_DrawCircleLines),
  JS_CFUNC_DEF("DrawEllipse", 5, wrapped_DrawEllipse),
  JS_CFUNC_DEF("DrawEllipseLines", 5, wrapped_DrawEllipseLines),
  JS_CFUNC_DEF("DrawRing", 7, wrapped_DrawRing),
  JS_CFUNC_DEF("DrawRingLines", 7, wrapped_DrawRingLines),
  JS_CFUNC_DEF("DrawRectangle", 5, wrapped_DrawRectangle),
  JS_CFUNC_DEF("DrawRectangleV", 3, wrapped_DrawRectangleV),
  JS_CFUNC_DEF("DrawRectangleRec", 2, wrapped_DrawRectangleRec),
  JS_CFUNC_DEF("DrawRectanglePro", 4, wrapped_DrawRectanglePro),
  JS_CFUNC_DEF("DrawRectangleGradientV", 6, wrapped_DrawRectangleGradientV),
  JS_CFUNC_DEF("DrawRectangleGradientH", 6, wrapped_DrawRectangleGradientH),
  JS_CFUNC_DEF("DrawRectangleGradientEx", 5, wrapped_DrawRectangleGradientEx),
  JS_CFUNC_DEF("DrawRectangleLines", 5, wrapped_DrawRectangleLines),
  JS_CFUNC_DEF("DrawRectangleLinesEx", 3, wrapped_DrawRectangleLinesEx),
  JS_CFUNC_DEF("DrawRectangleRounded", 4, wrapped_DrawRectangleRounded),
  JS_CFUNC_DEF("DrawRectangleRoundedLines", 5, wrapped_DrawRectangleRoundedLines),
  JS_CFUNC_DEF("DrawTriangle", 4, wrapped_DrawTriangle),
  JS_CFUNC_DEF("DrawTriangleLines", 4, wrapped_DrawTriangleLines),
  JS_CFUNC_DEF("DrawTriangleFan", 3, wrapped_DrawTriangleFan),
  JS_CFUNC_DEF("DrawTriangleStrip", 3, wrapped_DrawTriangleStrip),
  JS_CFUNC_DEF("DrawPoly", 5, wrapped_DrawPoly),
  JS_CFUNC_DEF("DrawPolyLines", 5, wrapped_DrawPolyLines),
  JS_CFUNC_DEF("DrawPolyLinesEx", 6, wrapped_DrawPolyLinesEx),
  JS_CFUNC_DEF("CheckCollisionRecs", 2, wrapped_CheckCollisionRecs),
  JS_CFUNC_DEF("CheckCollisionCircles", 4, wrapped_CheckCollisionCircles),
  JS_CFUNC_DEF("CheckCollisionCircleRec", 3, wrapped_CheckCollisionCircleRec),
  JS_CFUNC_DEF("CheckCollisionPointRec", 2, wrapped_CheckCollisionPointRec),
  JS_CFUNC_DEF("CheckCollisionPointCircle", 3, wrapped_CheckCollisionPointCircle),
  JS_CFUNC_DEF("CheckCollisionPointTriangle", 4, wrapped_CheckCollisionPointTriangle),
  JS_CFUNC_DEF("CheckCollisionLines", 5, wrapped_CheckCollisionLines),
  JS_CFUNC_DEF("GetCollisionRec", 2, wrapped_GetCollisionRec),
  JS_CFUNC_DEF("LoadImage", 1, wrapped_LoadImage),
  JS_CFUNC_DEF("LoadImageRaw", 5, wrapped_LoadImageRaw),
  JS_CFUNC_DEF("LoadImageAnim", 2, wrapped_LoadImageAnim),
  JS_CFUNC_DEF("LoadImageFromMemory", 3, wrapped_LoadImageFromMemory),
  JS_CFUNC_DEF("UnloadImage", 1, wrapped_UnloadImage),
  JS_CFUNC_DEF("ExportImage", 2, wrapped_ExportImage),
  JS_CFUNC_DEF("ExportImageAsCode", 2, wrapped_ExportImageAsCode),
  JS_CFUNC_DEF("GenImageColor", 3, wrapped_GenImageColor),
  JS_CFUNC_DEF("GenImageGradientV", 4, wrapped_GenImageGradientV),
  JS_CFUNC_DEF("GenImageGradientH", 4, wrapped_GenImageGradientH),
  JS_CFUNC_DEF("GenImageGradientRadial", 5, wrapped_GenImageGradientRadial),
  JS_CFUNC_DEF("GenImageChecked", 6, wrapped_GenImageChecked),
  JS_CFUNC_DEF("GenImageWhiteNoise", 3, wrapped_GenImageWhiteNoise),
  JS_CFUNC_DEF("GenImagePerlinNoise", 5, wrapped_GenImagePerlinNoise),
  JS_CFUNC_DEF("GenImageCellular", 3, wrapped_GenImageCellular),
  JS_CFUNC_DEF("ImageCopy", 1, wrapped_ImageCopy),
  JS_CFUNC_DEF("ImageFromImage", 2, wrapped_ImageFromImage),
  JS_CFUNC_DEF("ImageText", 3, wrapped_ImageText),
  JS_CFUNC_DEF("ImageTextEx", 5, wrapped_ImageTextEx),
  JS_CFUNC_DEF("ImageFormat", 2, wrapped_ImageFormat),
  JS_CFUNC_DEF("ImageToPOT", 2, wrapped_ImageToPOT),
  JS_CFUNC_DEF("ImageCrop", 2, wrapped_ImageCrop),
  JS_CFUNC_DEF("ImageAlphaCrop", 2, wrapped_ImageAlphaCrop),
  JS_CFUNC_DEF("ImageAlphaClear", 3, wrapped_ImageAlphaClear),
  JS_CFUNC_DEF("ImageAlphaMask", 2, wrapped_ImageAlphaMask),
  JS_CFUNC_DEF("ImageAlphaPremultiply", 1, wrapped_ImageAlphaPremultiply),
  JS_CFUNC_DEF("ImageResize", 3, wrapped_ImageResize),
  JS_CFUNC_DEF("ImageResizeNN", 3, wrapped_ImageResizeNN),
  JS_CFUNC_DEF("ImageResizeCanvas", 6, wrapped_ImageResizeCanvas),
  JS_CFUNC_DEF("ImageMipmaps", 1, wrapped_ImageMipmaps),
  JS_CFUNC_DEF("ImageDither", 5, wrapped_ImageDither),
  JS_CFUNC_DEF("ImageFlipVertical", 1, wrapped_ImageFlipVertical),
  JS_CFUNC_DEF("ImageFlipHorizontal", 1, wrapped_ImageFlipHorizontal),
  JS_CFUNC_DEF("ImageRotateCW", 1, wrapped_ImageRotateCW),
  JS_CFUNC_DEF("ImageRotateCCW", 1, wrapped_ImageRotateCCW),
  JS_CFUNC_DEF("ImageColorTint", 2, wrapped_ImageColorTint),
  JS_CFUNC_DEF("ImageColorInvert", 1, wrapped_ImageColorInvert),
  JS_CFUNC_DEF("ImageColorGrayscale", 1, wrapped_ImageColorGrayscale),
  JS_CFUNC_DEF("ImageColorContrast", 2, wrapped_ImageColorContrast),
  JS_CFUNC_DEF("ImageColorBrightness", 2, wrapped_ImageColorBrightness),
  JS_CFUNC_DEF("ImageColorReplace", 3, wrapped_ImageColorReplace),
  JS_CFUNC_DEF("LoadImageColors", 1, wrapped_LoadImageColors),
  JS_CFUNC_DEF("LoadImagePalette", 3, wrapped_LoadImagePalette),
  JS_CFUNC_DEF("UnloadImageColors", 1, wrapped_UnloadImageColors),
  JS_CFUNC_DEF("UnloadImagePalette", 1, wrapped_UnloadImagePalette),
  JS_CFUNC_DEF("GetImageAlphaBorder", 2, wrapped_GetImageAlphaBorder),
  JS_CFUNC_DEF("ImageClearBackground", 2, wrapped_ImageClearBackground),
  JS_CFUNC_DEF("ImageDrawPixel", 4, wrapped_ImageDrawPixel),
  JS_CFUNC_DEF("ImageDrawPixelV", 3, wrapped_ImageDrawPixelV),
  JS_CFUNC_DEF("ImageDrawLine", 6, wrapped_ImageDrawLine),
  JS_CFUNC_DEF("ImageDrawLineV", 4, wrapped_ImageDrawLineV),
  JS_CFUNC_DEF("ImageDrawCircle", 5, wrapped_ImageDrawCircle),
  JS_CFUNC_DEF("ImageDrawCircleV", 4, wrapped_ImageDrawCircleV),
  JS_CFUNC_DEF("ImageDrawRectangle", 6, wrapped_ImageDrawRectangle),
  JS_CFUNC_DEF("ImageDrawRectangleV", 4, wrapped_ImageDrawRectangleV),
  JS_CFUNC_DEF("ImageDrawRectangleRec", 3, wrapped_ImageDrawRectangleRec),
  JS_CFUNC_DEF("ImageDrawRectangleLines", 4, wrapped_ImageDrawRectangleLines),
  JS_CFUNC_DEF("ImageDraw", 5, wrapped_ImageDraw),
  JS_CFUNC_DEF("ImageDrawText", 6, wrapped_ImageDrawText),
  JS_CFUNC_DEF("ImageDrawTextEx", 7, wrapped_ImageDrawTextEx),
  JS_CFUNC_DEF("LoadTexture", 1, wrapped_LoadTexture),
  JS_CFUNC_DEF("LoadTextureFromImage", 1, wrapped_LoadTextureFromImage),
  JS_CFUNC_DEF("LoadTextureCubemap", 2, wrapped_LoadTextureCubemap),
  JS_CFUNC_DEF("LoadRenderTexture", 2, wrapped_LoadRenderTexture),
  JS_CFUNC_DEF("UnloadTexture", 1, wrapped_UnloadTexture),
  JS_CFUNC_DEF("UnloadRenderTexture", 1, wrapped_UnloadRenderTexture),
  JS_CFUNC_DEF("UpdateTexture", 2, wrapped_UpdateTexture),
  JS_CFUNC_DEF("UpdateTextureRec", 3, wrapped_UpdateTextureRec),
  JS_CFUNC_DEF("GetTextureData", 1, wrapped_GetTextureData),
  JS_CFUNC_DEF("GetScreenData", 0, wrapped_GetScreenData),
  JS_CFUNC_DEF("GenTextureMipmaps", 1, wrapped_GenTextureMipmaps),
  JS_CFUNC_DEF("SetTextureFilter", 2, wrapped_SetTextureFilter),
  JS_CFUNC_DEF("SetTextureWrap", 2, wrapped_SetTextureWrap),
  JS_CFUNC_DEF("DrawTexture", 4, wrapped_DrawTexture),
  JS_CFUNC_DEF("DrawTextureV", 3, wrapped_DrawTextureV),
  JS_CFUNC_DEF("DrawTextureEx", 5, wrapped_DrawTextureEx),
  JS_CFUNC_DEF("DrawTextureRec", 4, wrapped_DrawTextureRec),
  JS_CFUNC_DEF("DrawTextureQuad", 5, wrapped_DrawTextureQuad),
  JS_CFUNC_DEF("DrawTextureTiled", 7, wrapped_DrawTextureTiled),
  JS_CFUNC_DEF("DrawTexturePro", 6, wrapped_DrawTexturePro),
  JS_CFUNC_DEF("DrawTextureNPatch", 6, wrapped_DrawTextureNPatch),
  JS_CFUNC_DEF("DrawTexturePoly", 6, wrapped_DrawTexturePoly),
  JS_CFUNC_DEF("Fade", 2, wrapped_Fade),
  JS_CFUNC_DEF("ColorToInt", 1, wrapped_ColorToInt),
  JS_CFUNC_DEF("ColorNormalize", 1, wrapped_ColorNormalize),
  JS_CFUNC_DEF("ColorFromNormalized", 1, wrapped_ColorFromNormalized),
  JS_CFUNC_DEF("ColorToHSV", 1, wrapped_ColorToHSV),
  JS_CFUNC_DEF("ColorFromHSV", 3, wrapped_ColorFromHSV),
  JS_CFUNC_DEF("ColorAlpha", 2, wrapped_ColorAlpha),
  JS_CFUNC_DEF("ColorAlphaBlend", 3, wrapped_ColorAlphaBlend),
  JS_CFUNC_DEF("GetColor", 1, wrapped_GetColor),
  JS_CFUNC_DEF("GetPixelColor", 2, wrapped_GetPixelColor),
  JS_CFUNC_DEF("SetPixelColor", 3, wrapped_SetPixelColor),
  JS_CFUNC_DEF("GetPixelDataSize", 3, wrapped_GetPixelDataSize),
  JS_CFUNC_DEF("GetFontDefault", 0, wrapped_GetFontDefault),
  JS_CFUNC_DEF("LoadFont", 1, wrapped_LoadFont),
  JS_CFUNC_DEF("LoadFontEx", 4, wrapped_LoadFontEx),
  JS_CFUNC_DEF("LoadFontFromImage", 3, wrapped_LoadFontFromImage),
  JS_CFUNC_DEF("LoadFontFromMemory", 6, wrapped_LoadFontFromMemory),
  JS_CFUNC_DEF("LoadFontData", 6, wrapped_LoadFontData),
  JS_CFUNC_DEF("GenImageFontAtlas", 6, wrapped_GenImageFontAtlas),
  JS_CFUNC_DEF("UnloadFontData", 2, wrapped_UnloadFontData),
  JS_CFUNC_DEF("UnloadFont", 1, wrapped_UnloadFont),
  JS_CFUNC_DEF("DrawFPS", 2, wrapped_DrawFPS),
  JS_CFUNC_DEF("DrawText", 5, wrapped_DrawText),
  JS_CFUNC_DEF("DrawTextEx", 6, wrapped_DrawTextEx),
  JS_CFUNC_DEF("DrawTextRec", 7, wrapped_DrawTextRec),
  JS_CFUNC_DEF("DrawTextRecEx", 11, wrapped_DrawTextRecEx),
  JS_CFUNC_DEF("DrawTextCodepoint", 5, wrapped_DrawTextCodepoint),
  JS_CFUNC_DEF("MeasureText", 2, wrapped_MeasureText),
  JS_CFUNC_DEF("MeasureTextEx", 4, wrapped_MeasureTextEx),
  JS_CFUNC_DEF("GetGlyphIndex", 2, wrapped_GetGlyphIndex),
  JS_CFUNC_DEF("TextCopy", 2, wrapped_TextCopy),
  JS_CFUNC_DEF("TextIsEqual", 2, wrapped_TextIsEqual),
  JS_CFUNC_DEF("TextLength", 1, wrapped_TextLength),
  JS_CFUNC_DEF("TextFormat", 2, wrapped_TextFormat),
  JS_CFUNC_DEF("TextSubtext", 3, wrapped_TextSubtext),
  JS_CFUNC_DEF("TextReplace", 3, wrapped_TextReplace),
  JS_CFUNC_DEF("TextInsert", 3, wrapped_TextInsert),
  JS_CFUNC_DEF("TextJoin", 3, wrapped_TextJoin),
  JS_CFUNC_DEF("TextSplit", 3, wrapped_TextSplit),
  JS_CFUNC_DEF("TextAppend", 3, wrapped_TextAppend),
  JS_CFUNC_DEF("TextFindIndex", 2, wrapped_TextFindIndex),
  JS_CFUNC_DEF("TextToUpper", 1, wrapped_TextToUpper),
  JS_CFUNC_DEF("TextToLower", 1, wrapped_TextToLower),
  JS_CFUNC_DEF("TextToPascal", 1, wrapped_TextToPascal),
  JS_CFUNC_DEF("TextToInteger", 1, wrapped_TextToInteger),
  JS_CFUNC_DEF("TextToUtf8", 2, wrapped_TextToUtf8),
  JS_CFUNC_DEF("GetCodepoints", 2, wrapped_GetCodepoints),
  JS_CFUNC_DEF("GetCodepointsCount", 1, wrapped_GetCodepointsCount),
  JS_CFUNC_DEF("GetNextCodepoint", 2, wrapped_GetNextCodepoint),
  JS_CFUNC_DEF("CodepointToUtf8", 2, wrapped_CodepointToUtf8),
  JS_CFUNC_DEF("DrawLine3D", 3, wrapped_DrawLine3D),
  JS_CFUNC_DEF("DrawPoint3D", 2, wrapped_DrawPoint3D),
  JS_CFUNC_DEF("DrawCircle3D", 5, wrapped_DrawCircle3D),
  JS_CFUNC_DEF("DrawTriangle3D", 4, wrapped_DrawTriangle3D),
  JS_CFUNC_DEF("DrawTriangleStrip3D", 3, wrapped_DrawTriangleStrip3D),
  JS_CFUNC_DEF("DrawCube", 5, wrapped_DrawCube),
  JS_CFUNC_DEF("DrawCubeV", 3, wrapped_DrawCubeV),
  JS_CFUNC_DEF("DrawCubeWires", 5, wrapped_DrawCubeWires),
  JS_CFUNC_DEF("DrawCubeWiresV", 3, wrapped_DrawCubeWiresV),
  JS_CFUNC_DEF("DrawCubeTexture", 6, wrapped_DrawCubeTexture),
  JS_CFUNC_DEF("DrawSphere", 3, wrapped_DrawSphere),
  JS_CFUNC_DEF("DrawSphereEx", 5, wrapped_DrawSphereEx),
  JS_CFUNC_DEF("DrawSphereWires", 5, wrapped_DrawSphereWires),
  JS_CFUNC_DEF("DrawCylinder", 6, wrapped_DrawCylinder),
  JS_CFUNC_DEF("DrawCylinderWires", 6, wrapped_DrawCylinderWires),
  JS_CFUNC_DEF("DrawPlane", 3, wrapped_DrawPlane),
  JS_CFUNC_DEF("DrawRay", 2, wrapped_DrawRay),
  JS_CFUNC_DEF("DrawGrid", 2, wrapped_DrawGrid),
  JS_CFUNC_DEF("LoadModel", 1, wrapped_LoadModel),
  JS_CFUNC_DEF("LoadModelFromMesh", 1, wrapped_LoadModelFromMesh),
  JS_CFUNC_DEF("UnloadModel", 1, wrapped_UnloadModel),
  JS_CFUNC_DEF("UnloadModelKeepMeshes", 1, wrapped_UnloadModelKeepMeshes),
  JS_CFUNC_DEF("UploadMesh", 2, wrapped_UploadMesh),
  JS_CFUNC_DEF("UpdateMeshBuffer", 5, wrapped_UpdateMeshBuffer),
  JS_CFUNC_DEF("DrawMesh", 3, wrapped_DrawMesh),
  JS_CFUNC_DEF("DrawMeshInstanced", 4, wrapped_DrawMeshInstanced),
  JS_CFUNC_DEF("UnloadMesh", 1, wrapped_UnloadMesh),
  JS_CFUNC_DEF("ExportMesh", 2, wrapped_ExportMesh),
  JS_CFUNC_DEF("LoadMaterials", 2, wrapped_LoadMaterials),
  JS_CFUNC_DEF("LoadMaterialDefault", 0, wrapped_LoadMaterialDefault),
  JS_CFUNC_DEF("UnloadMaterial", 1, wrapped_UnloadMaterial),
  JS_CFUNC_DEF("SetMaterialTexture", 3, wrapped_SetMaterialTexture),
  JS_CFUNC_DEF("SetModelMeshMaterial", 3, wrapped_SetModelMeshMaterial),
  JS_CFUNC_DEF("LoadModelAnimations", 2, wrapped_LoadModelAnimations),
  JS_CFUNC_DEF("UpdateModelAnimation", 3, wrapped_UpdateModelAnimation),
  JS_CFUNC_DEF("UnloadModelAnimation", 1, wrapped_UnloadModelAnimation),
  JS_CFUNC_DEF("UnloadModelAnimations", 2, wrapped_UnloadModelAnimations),
  JS_CFUNC_DEF("IsModelAnimationValid", 2, wrapped_IsModelAnimationValid),
  JS_CFUNC_DEF("GenMeshPoly", 2, wrapped_GenMeshPoly),
  JS_CFUNC_DEF("GenMeshPlane", 4, wrapped_GenMeshPlane),
  JS_CFUNC_DEF("GenMeshCube", 3, wrapped_GenMeshCube),
  JS_CFUNC_DEF("GenMeshSphere", 3, wrapped_GenMeshSphere),
  JS_CFUNC_DEF("GenMeshHemiSphere", 3, wrapped_GenMeshHemiSphere),
  JS_CFUNC_DEF("GenMeshCylinder", 3, wrapped_GenMeshCylinder),
  JS_CFUNC_DEF("GenMeshTorus", 4, wrapped_GenMeshTorus),
  JS_CFUNC_DEF("GenMeshKnot", 4, wrapped_GenMeshKnot),
  JS_CFUNC_DEF("GenMeshHeightmap", 2, wrapped_GenMeshHeightmap),
  JS_CFUNC_DEF("GenMeshCubicmap", 2, wrapped_GenMeshCubicmap),
  JS_CFUNC_DEF("GetMeshBoundingBox", 1, wrapped_GetMeshBoundingBox),
  JS_CFUNC_DEF("MeshTangents", 1, wrapped_MeshTangents),
  JS_CFUNC_DEF("MeshBinormals", 1, wrapped_MeshBinormals),
  JS_CFUNC_DEF("DrawModel", 4, wrapped_DrawModel),
  JS_CFUNC_DEF("DrawModelEx", 6, wrapped_DrawModelEx),
  JS_CFUNC_DEF("DrawModelWires", 4, wrapped_DrawModelWires),
  JS_CFUNC_DEF("DrawModelWiresEx", 6, wrapped_DrawModelWiresEx),
  JS_CFUNC_DEF("DrawBoundingBox", 2, wrapped_DrawBoundingBox),
  JS_CFUNC_DEF("DrawBillboard", 5, wrapped_DrawBillboard),
  JS_CFUNC_DEF("DrawBillboardRec", 6, wrapped_DrawBillboardRec),
  JS_CFUNC_DEF("DrawBillboardPro", 8, wrapped_DrawBillboardPro),
  JS_CFUNC_DEF("CheckCollisionSpheres", 4, wrapped_CheckCollisionSpheres),
  JS_CFUNC_DEF("CheckCollisionBoxes", 2, wrapped_CheckCollisionBoxes),
  JS_CFUNC_DEF("CheckCollisionBoxSphere", 3, wrapped_CheckCollisionBoxSphere),
  JS_CFUNC_DEF("GetRayCollisionSphere", 3, wrapped_GetRayCollisionSphere),
  JS_CFUNC_DEF("GetRayCollisionBox", 2, wrapped_GetRayCollisionBox),
  JS_CFUNC_DEF("GetRayCollisionModel", 2, wrapped_GetRayCollisionModel),
  JS_CFUNC_DEF("GetRayCollisionMesh", 3, wrapped_GetRayCollisionMesh),
  JS_CFUNC_DEF("GetRayCollisionTriangle", 4, wrapped_GetRayCollisionTriangle),
  JS_CFUNC_DEF("GetRayCollisionQuad", 5, wrapped_GetRayCollisionQuad),
  JS_CFUNC_DEF("InitAudioDevice", 0, wrapped_InitAudioDevice),
  JS_CFUNC_DEF("CloseAudioDevice", 0, wrapped_CloseAudioDevice),
  JS_CFUNC_DEF("IsAudioDeviceReady", 0, wrapped_IsAudioDeviceReady),
  JS_CFUNC_DEF("SetMasterVolume", 1, wrapped_SetMasterVolume),
  JS_CFUNC_DEF("LoadWave", 1, wrapped_LoadWave),
  JS_CFUNC_DEF("LoadWaveFromMemory", 3, wrapped_LoadWaveFromMemory),
  JS_CFUNC_DEF("LoadSound", 1, wrapped_LoadSound),
  JS_CFUNC_DEF("LoadSoundFromWave", 1, wrapped_LoadSoundFromWave),
  JS_CFUNC_DEF("UpdateSound", 3, wrapped_UpdateSound),
  JS_CFUNC_DEF("UnloadWave", 1, wrapped_UnloadWave),
  JS_CFUNC_DEF("UnloadSound", 1, wrapped_UnloadSound),
  JS_CFUNC_DEF("ExportWave", 2, wrapped_ExportWave),
  JS_CFUNC_DEF("ExportWaveAsCode", 2, wrapped_ExportWaveAsCode),
  JS_CFUNC_DEF("PlaySound", 1, wrapped_PlaySound),
  JS_CFUNC_DEF("StopSound", 1, wrapped_StopSound),
  JS_CFUNC_DEF("PauseSound", 1, wrapped_PauseSound),
  JS_CFUNC_DEF("ResumeSound", 1, wrapped_ResumeSound),
  JS_CFUNC_DEF("PlaySoundMulti", 1, wrapped_PlaySoundMulti),
  JS_CFUNC_DEF("StopSoundMulti", 0, wrapped_StopSoundMulti),
  JS_CFUNC_DEF("GetSoundsPlaying", 0, wrapped_GetSoundsPlaying),
  JS_CFUNC_DEF("IsSoundPlaying", 1, wrapped_IsSoundPlaying),
  JS_CFUNC_DEF("SetSoundVolume", 2, wrapped_SetSoundVolume),
  JS_CFUNC_DEF("SetSoundPitch", 2, wrapped_SetSoundPitch),
  JS_CFUNC_DEF("WaveFormat", 4, wrapped_WaveFormat),
  JS_CFUNC_DEF("WaveCopy", 1, wrapped_WaveCopy),
  JS_CFUNC_DEF("WaveCrop", 3, wrapped_WaveCrop),
  JS_CFUNC_DEF("LoadWaveSamples", 1, wrapped_LoadWaveSamples),
  JS_CFUNC_DEF("UnloadWaveSamples", 1, wrapped_UnloadWaveSamples),
  JS_CFUNC_DEF("LoadMusicStream", 1, wrapped_LoadMusicStream),
  JS_CFUNC_DEF("LoadMusicStreamFromMemory", 3, wrapped_LoadMusicStreamFromMemory),
  JS_CFUNC_DEF("UnloadMusicStream", 1, wrapped_UnloadMusicStream),
  JS_CFUNC_DEF("PlayMusicStream", 1, wrapped_PlayMusicStream),
  JS_CFUNC_DEF("IsMusicStreamPlaying", 1, wrapped_IsMusicStreamPlaying),
  JS_CFUNC_DEF("UpdateMusicStream", 1, wrapped_UpdateMusicStream),
  JS_CFUNC_DEF("StopMusicStream", 1, wrapped_StopMusicStream),
  JS_CFUNC_DEF("PauseMusicStream", 1, wrapped_PauseMusicStream),
  JS_CFUNC_DEF("ResumeMusicStream", 1, wrapped_ResumeMusicStream),
  JS_CFUNC_DEF("SetMusicVolume", 2, wrapped_SetMusicVolume),
  JS_CFUNC_DEF("SetMusicPitch", 2, wrapped_SetMusicPitch),
  JS_CFUNC_DEF("GetMusicTimeLength", 1, wrapped_GetMusicTimeLength),
  JS_CFUNC_DEF("GetMusicTimePlayed", 1, wrapped_GetMusicTimePlayed),
  JS_CFUNC_DEF("LoadAudioStream", 3, wrapped_LoadAudioStream),
  JS_CFUNC_DEF("UnloadAudioStream", 1, wrapped_UnloadAudioStream),
  JS_CFUNC_DEF("UpdateAudioStream", 3, wrapped_UpdateAudioStream),
  JS_CFUNC_DEF("IsAudioStreamProcessed", 1, wrapped_IsAudioStreamProcessed),
  JS_CFUNC_DEF("PlayAudioStream", 1, wrapped_PlayAudioStream),
  JS_CFUNC_DEF("PauseAudioStream", 1, wrapped_PauseAudioStream),
  JS_CFUNC_DEF("ResumeAudioStream", 1, wrapped_ResumeAudioStream),
  JS_CFUNC_DEF("IsAudioStreamPlaying", 1, wrapped_IsAudioStreamPlaying),
  JS_CFUNC_DEF("StopAudioStream", 1, wrapped_StopAudioStream),
  JS_CFUNC_DEF("SetAudioStreamVolume", 2, wrapped_SetAudioStreamVolume),
  JS_CFUNC_DEF("SetAudioStreamPitch", 2, wrapped_SetAudioStreamPitch),
  JS_CFUNC_DEF("SetAudioStreamBufferSizeDefault", 1, wrapped_SetAudioStreamBufferSizeDefault)
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
}
