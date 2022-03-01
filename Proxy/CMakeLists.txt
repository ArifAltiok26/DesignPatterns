cmake_minimum_required(VERSION 3.10)
project(Proxy)

file(GLOB_RECURSE ProxyPatternFiles
    main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_executable(ProxyExample ${ProxyPatternFiles})
target_include_directories(ProxyExample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)