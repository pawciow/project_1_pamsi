cmake_minimum_required(VERSION 3.9)
project(Projekt_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Projekt_1 main.cpp Quicksort.cpp Quicksort.h heapsort.cpp heapsort.h constants.h interfaces.h wrappers.cpp wrappers.h interfaces.cpp MergeSort.cpp MergeSort.h hybridSort.cpp hybridSort.h)