cmake_minimum_required(VERSION 3.1.0)
set(CMAKE_CXX_STANDARD 11)
set(PROJECT "QuickSample")
set(USE_BOOST 1)
set(OUTPUT ${PROJECT})


project(${PROJECT})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(${CMAKE_SOURCE_DIR})


add_subdirectory(adapter)






