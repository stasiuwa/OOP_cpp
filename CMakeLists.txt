cmake_minimum_required(VERSION 3.26)
project(Adv_OOP_C++)

set(CMAKE_CXX_STANDARD 17)

set(BOOST_ROOT "boost_1_83_0")
find_package(Boost 1.83.0)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()
message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
message(STATUS "Boost_VERSION: ${Boost_VERSION}")
include_directories(${Boost_INCLUDE_DIR})

add_executable(Adv_OOP_C++
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
        lab2/TeamLeader.h
        main.cpp
        lab2/Bufor.cpp
        lab2/Bufor.h
        lab2/MeanBufor.cpp
        lab2/MeanBufor.h
        lab2/MaxBufor.cpp
        lab2/MaxBufor.h
        lab3/Adding.h
        lab3/Student.h
        lab3/Array.h
        lab5/Dictionary.cpp
        lab5/Dictionary.h
        lab4/Citizen.cpp
        lab4/Citizen.h
        lab4/City.cpp
        lab4/City.h
        lab6/Person.cpp
        lab6/Person.h
        lab6/Contact.cpp
        lab6/Contact.h
        lab6/Contacts.cpp
        lab6/Contacts.h)
