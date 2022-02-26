CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(Decorator_DesignPattern VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_Files src/*.cpp)
add_executable(DecoratorExample main.cpp ${SRC_Files})

target_include_directories(DecoratorExample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)