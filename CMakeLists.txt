cmake_minimum_required(VERSION 3.1.0)
set(CMAKE_CXX_STANDARD 11)
set(PROJECT "QuickSample")
set(USE_BOOST 1)


project(${PROJECT})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(lesson_1)


if(USE_BOOST)

  set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
  set(Boost_USE_MULTITHREADED      ON)

  find_package(Boost REQUIRED COMPONENTS system log)
endif()





