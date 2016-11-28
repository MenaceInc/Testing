cmake_minimum_required(VERSION 3.4)
project(com_menaceinc_Testing)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wl,--subsystem,windows")

# Generate bin folder
add_custom_target(build-time-make-directory ALL COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/bin)

# Set output folder to bin folder
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(OpenGL REQUIRED)

set(SOURCE_FILES src/main.cpp src/View.cpp src/View.h src/BaseWindow.h src/Win32Window.cpp src/Win32Window.h)
add_executable(Testing ${SOURCE_FILES})

target_link_libraries(Testing ${OPENGL_gl_LIBRARY})

INCLUDE(InstallRequiredSystemLibraries)
INCLUDE(CPack)
