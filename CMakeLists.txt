cmake_minimum_required(VERSION 3.17)
project(CarWasher C)

set(CMAKE_C_STANDARD 99)

add_executable(CarWasher main.c stack.c stack.h queue.c queue.h global.h)