cmake_minimum_required(VERSION 3.10)
project(si2026)

include_directories(${CMAKE_CURRENT_LIST_DIR})
add_executable(carSerial main.c serial.c)
