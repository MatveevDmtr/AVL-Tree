cmake_minimum_required(VERSION 3.8)

project(AVL_tree LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g -O0 -DLOGGING -fsanitize=address -fsanitize=undefined")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O2")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

#find_package(Threads REQUIRED)
#find_package(GTest REQUIRED)
#enable_testing()

include_directories(include)
add_subdirectory(src)