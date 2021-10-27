cmake_minimum_required(VERSION 3.0)
project(quickray VERSION 0.0.1 DESCRIPTION "QuickJS native module for raylib")

set(CMAKE_C_STANDARD 99)

# Setting parameters for raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games

# TODO: build quickjs first, even though it doesn't use cmake
# TODO: build raylib parser? Maybe not needed, as we already have lib/raylib/parser/raylib_api.json
# TODO: generate dll-source (for quickjs) and any js/ts to wrap around that

add_subdirectory(libs/raylib)
add_subdirectory(libs/quickjs)


add_library(quickray SHARED
    quickray.c
)

target_link_libraries(quickray PRIVATE raylib)
target_link_libraries(quickray PRIVATE quickjs)

