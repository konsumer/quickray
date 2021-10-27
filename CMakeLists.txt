include(ExternalProject)
cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 99)

project(
  quickray
  VERSION 0.0.1
  DESCRIPTION "QuickJS native module for raylib"
)

if(NOT CMAKE_BUILD_TYPE)
  set(
    CMAKE_BUILD_TYPE "RelWithDebInfo"
    CACHE STRING "Default build type: RelWithDebInfo" FORCE
  )
endif()

# Setting parameters & build for raylib
set(OpenGL_GL_PREFERENCE GLVND)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games
add_subdirectory(lib/raylib)


# TODO: using BUILD_IN_SOURCE against recommendation. might be possible to use it without
ExternalProject_Add(
  quickjs
  BUILD_IN_SOURCE TRUE
  SOURCE_DIR ../lib/quickjs
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make
  INSTALL_COMMAND ""
)

# TODO: generate quickray.c (for quickjs) from lib/raylib/parser/raylib_api.json before build


add_library(
  quickray
  SHARED quickray.c
)

# TODO: Need to figure out how to link quickjs & raylib
# target_link_libraries(quickray PRIVATE raylib PRIVATE quickjs)
