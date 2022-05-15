cmake_minimum_required(VERSION 3.5)

project(JsonCmakeTemplate LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(JsonCmakeTemplate main.cpp)

include(./json/json.cmake)
