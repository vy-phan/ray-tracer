cmake_minimum_required(VERSION 3.21)
project(ray_tracer)

set(CMAKE_CXX_STANDARD 14)

add_executable(ray_tracer src/main.cpp)

target_include_directories(ray_tracer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)


