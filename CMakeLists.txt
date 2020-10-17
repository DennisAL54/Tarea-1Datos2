
cmake_minimum_required(VERSION 3.17)

project("tarea_datos_2")

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)

include_directories(lib/googletest-master/googletest/include)

include_directories(lib/googletest-master/googlemock/include)

add_executable(tarea_datos_2 main.cpp TEST.cpp FloydWarshall.cpp)

target_link_libraries(tarea_datos_2 gtest gtest_main)


