cmake_minimum_required(VERSION 3.5)
project(MinWinPP)

if (CMAKE_SYSTEM_NAME MATCHES Windows)
    set(LIB_FILES Win32/Win32Window.cpp)
    include_directories(${CMAKE_CURRENT_SOURCE_DIR} Win32)
    
    if (CMAKE_BUILD_TYPE MATCHES Debug)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wl,--subsystem,console")
        message("-- Subsystem set to console: MinWinPP Debug window shown")
    else ()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wl,--subsystem,windows")
        message("-- Subsystem set to windows: MinWinPP Debug window not shown")
    endif ()
endif ()

# Define the MinWinPP library
add_library(MinWinPP ${LIB_FILES})

# Set the current directory as an include directory
target_include_directories(MinWinPP PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
