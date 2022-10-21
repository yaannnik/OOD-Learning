cmake_minimum_required(VERSION 3.20)
project(template)

set(CMAKE_CXX_STANDARD 17)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(HelloWorld src/HelloWorld/HelloWorld.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main HelloWorld)