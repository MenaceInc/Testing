cmake_minimum_required(VERSION 3.5)
project(com_menaceinc_Testing)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES src/main.cpp)

add_executable(Testing ${SOURCE_FILES})

INCLUDE(InstallRequiredSystemLibraries)
INCLUDE(CPack)
