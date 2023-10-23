//
// Created by student on 23.10.2023.
//

#ifndef UNTITLED_ARRAY_H
#define UNTITLED_ARRAY_H
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
class Array {
private:
    T* array;
    int size;
    int firstFreeIndex;
public:
    Array(int size1);
    Array();
    ~Array();

    void sortR();
    T maxElem();
    void show();
    void add(T value);
    T search(int index);
};
template <typename T>
Array<T>::Array(int size1) {
    this->size=size1;
    this->firstFreeIndex=0;
    array = new T[size];
}
template <typename T>
Array<T>::Array() { // czemu wywołanie tutaj drugiego kosntruktora z parametrem (Array(10);) powoduje niepoprawne działanie ale bez bledów kompilacji
    this->size=10;
    this->firstFreeIndex=0;
    array = new T[size];
}

template <typename T>
Array<T>::~Array() {  delete array; } //for(int i=0;i<size;i++)

template <typename T>
T Array<T>::maxElem() {
    T max = array[0];
    for(int i=0;i<size;i++) if(array[i]>max) max=array[i];
    return max;
}

template <typename T>
void Array<T>::sortR() { sort(array,array+size); }

template <typename T>
void Array<T>::show() { for(int i=0;i<size;i++) cout<<array[i]<<", "; cout<<endl;}

template <typename T>
void Array<T>::add(T value) { array[firstFreeIndex]=value; firstFreeIndex++; }

template <typename T>
T Array<T>::search(int index) { return array[index]; }

template<>
void Array<string>::sortR() { sort(array,array+size); }

template<>
string Array<string>::maxElem() {
    string maxLen = array[0];
    for(int i=0;i<size;i++) if(array[i].length()>maxLen.length()) maxLen=array[i];
    return maxLen;
}

#endif //UNTITLED_ARRAY_H
