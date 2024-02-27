cmake_minimum_required(VERSION 3.10)

project(PolyEngine)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

include(CTest)

add_subdirectory(PolyEngine)
add_subdirectory(UnitTesting)