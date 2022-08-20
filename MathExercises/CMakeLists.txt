cmake_minimum_required(VERSION 3.5)

project(MathExercises LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MathExercises main.cpp)

install(TARGETS MathExercises
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
