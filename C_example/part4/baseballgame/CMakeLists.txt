cmake_minimum_required(VERSION 3.10)
project(baseballgame)

include_directories(${CMAKE_CURRENT_LIST_DIR})

add_executable(baseballgame main.c baseballgame.c)
