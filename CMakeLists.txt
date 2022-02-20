cmake_minimum_required(VERSION 3.21)
project(ray_tracer)

set(CMAKE_CXX_STANDARD 14)

add_executable(ray_tracer build/main.cpp build/vec3.h build/color.h)
