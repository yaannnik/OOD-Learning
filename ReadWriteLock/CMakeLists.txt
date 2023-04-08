cmake_minimum_required(VERSION 3.20)
project(ReadWriteLock)

set(CMAKE_CXX_STANDARD 17)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(ReadWriteLock
        src/ReadLock.cpp
        src/WriteLock.cpp)
