cmake_minimum_required(VERSION 3.15)
project(Pong C)

set(CMAKE_C_STANDARD 23)

# Correct paths
set(RAYLIB_INCLUDE_DIR "/Users/vitorbetmann/_Dev/raylib/src")
set(RAYLIB_STATIC_LIB  "/Users/vitorbetmann/_MyPrograms/GD50/libraylib.a")

# Include raylib headers
include_directories(${RAYLIB_INCLUDE_DIR})

# Define executable
add_executable(Pong main.c)

# Link raylib + system libs
target_link_libraries(Pong
    ${RAYLIB_STATIC_LIB}
    m
    pthread
)

# ✅ macOS frameworks passed correctly to the linker
set_target_properties(Pong PROPERTIES
    LINK_FLAGS "-framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -framework AudioToolbox -framework CoreAudio"
)