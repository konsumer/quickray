include(ExternalProject)
cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 99)

project(
  quickray
  VERSION 0.0.1
  DESCRIPTION "QuickJS native module for raylib"
)

message(${CMAKE_CURRENT_SOURCE_DIR}/lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/raylib/src)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING
      "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel."
      FORCE)
endif(NOT CMAKE_BUILD_TYPE)

# Setting parameters & build for raylib
set(OpenGL_GL_PREFERENCE GLVND)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib/raylib)

# TODO: using BUILD_IN_SOURCE against recommendation. might be possible to use it without
ExternalProject_Add(
  quickjs
  BUILD_IN_SOURCE TRUE
  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib/quickjs
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make
)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/quickray.c
  COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/lib/quickjs/qjs ${CMAKE_CURRENT_SOURCE_DIR}/generate-raylib.js ${CMAKE_CURRENT_SOURCE_DIR}/lib/raylib/parser/raylib_api.json > ${CMAKE_CURRENT_BINARY_DIR}/quickray.c
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(
  quickray
  SHARED ${CMAKE_CURRENT_BINARY_DIR}/quickray.c
)
