cmake_minimum_required(VERSION 3.5)
project(com_menaceinc_Testing)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wl,--subsystem,windows")

add_subdirectory(lib/MinWinPP)

set(SOURCE_FILES src/main.cpp src/view.cpp)

add_executable(Testing ${SOURCE_FILES})
target_link_libraries(Testing ${OPENGL_gl_LIBRARY} MinWinPP)

INCLUDE(InstallRequiredSystemLibraries)
INCLUDE(CPack)
