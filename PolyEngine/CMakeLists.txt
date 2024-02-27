cmake_minimum_required(VERSION 3.10)

project(engine)

add_library(engine STATIC
    engine.cpp
    poly.cpp)

target_include_directories(engine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR})

