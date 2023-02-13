cmake_minimum_required(VERSION 3.20)
project(MyString)

set(CMAKE_CXX_STANDARD 17)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(MyString src/String/String.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main MyString)