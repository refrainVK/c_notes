cmake_minimum_required(VERSION 3.10)
project(Functions C)

set(CMAKE_C_STANDARD 99)

add_executable(Functions main.c)
target_link_libraries(Functions m)