
get_filename_component(DirName ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" DirrName ${DirName})

set(OUTPUT ${DirName})

add_executable(${OUTPUT} main.cpp)

if(USE_BOOST)
  find_package(Boost REQUIRED COMPONENTS system log)
  set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
  set(Boost_USE_MULTITHREADED      ON)
  include_directories(${Boost_INCLUDE_DIRS})
  target_link_libraries(${OUTPUT} ${Boost_LIBRARIES})
endif()

