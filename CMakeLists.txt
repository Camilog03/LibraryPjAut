cmake_minimum_required(VERSION 3.29)
project(Library_Management)

set(CMAKE_CXX_STANDARD 20)

add_executable(Library_Management main.cpp
        Book.cpp
        Book.h
        User.cpp
        User.h)
