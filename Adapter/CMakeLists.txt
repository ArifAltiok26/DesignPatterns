CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(Adapter VERSION 1.0)


file (GLOB_RECURSE AdapterExampleFiles 
    main.cpp
    src/*.cpp
)

add_executable(AdapterExample ${AdapterExampleFiles})

target_include_directories(AdapterExample PUBLIC include)