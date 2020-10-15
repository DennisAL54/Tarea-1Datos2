
cmake_minimum_required(VERSION 3.17)

project("tarea_datos_2")

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Google_Tests/lib)

include_directories(Google_Tests/lib/googletest/include)

include_directories(Google_Tests/lib/googlemock/include)

add_executable(tarea_datos_2 main.cpp)

target_link_libraries(tarea_datos_2 gtest gtest_main)


