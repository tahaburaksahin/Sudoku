
cmake_minimum_required(VERSION 3.27)
project(Sudoku)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sudoku main.cpp
        altproj.cpp
        altproj.h
        debug.cpp
        game.cpp
        game.h
        solver.cpp
        solver.h
        test.cpp
        test.h
)
