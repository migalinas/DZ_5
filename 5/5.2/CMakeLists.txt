cmake_minimum_required(VERSION 3.25)
project(5_2 C)

set(CMAKE_C_STANDARD 23)

add_executable(5_2 main.c stack.c getop.c)
target_link_libraries(5_2 m)
