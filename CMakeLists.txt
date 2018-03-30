cmake_minimum_required(VERSION 3.8)
project(timingtest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp include/sorts.h include/celebrity.h src/celebrity.cpp)
add_executable(timingtest ${SOURCE_FILES})