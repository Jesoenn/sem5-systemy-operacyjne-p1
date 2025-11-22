cmake_minimum_required(VERSION 3.26)
project(so_projekt1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "-static")

add_executable(so_projekt1 main.cpp
        core/Timer.cpp
        modes/Benchmark.cpp
        core/QuickSort.h
        core/FileManager.cpp)
