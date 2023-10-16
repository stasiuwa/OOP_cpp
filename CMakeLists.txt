cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled lab1/main.cpp
        lab1/Person.cpp
        lab1/Person.h
        lab1/Teacher.cpp
        lab1/Teacher.h
        lab1/Student.cpp
        lab1/Student.h
        lab1/Animal.cpp
        lab1/Animal.h
        lab1/Dog.cpp
        lab1/Dog.h
        lab1/Cat.cpp
        lab1/Cat.h
        lab2/main.cpp
        lab2/Figure.cpp
        lab2/Figure.h
        lab2/Square.cpp
        lab2/Square.h
        lab2/Circle.cpp
        lab2/Circle.h
        lab2/Employee.cpp
        lab2/Employee.h
        lab2/Developer.cpp
        lab2/Developer.h
        lab2/TeamLeader.cpp
        lab2/TeamLeader.h)
