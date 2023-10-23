//
// Created by student on 23.10.2023.
//

#ifndef UNTITLED_ADDING_H
#define UNTITLED_ADDING_H
#include <iostream>

template <typename T>
class Adding {
private:
    T element;
public:
    Adding(T value);
    void add(T value);
    void show();
};
template <typename T>
Adding<T>::Adding(T value) { element=value; }
template <typename T>
void Adding<T>::add(T value) { element+=value; }
template <typename T>
void Adding<T>::show() { std::cout<<"Element: "<<element<<std::endl; }

#endif //UNTITLED_ADDING_H
