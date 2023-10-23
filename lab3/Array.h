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
Array<T>::Array() { { Array(10); } }

template <typename T>
Array<T>::~Array() { for(int i=0;i<size;i++) delete array[i]; }

template <typename T>
T Array<T>::maxElem() {
    T max = array[0];
    for(T elem : array) if(elem>max) max=elem;
}

template <typename T>
void Array<T>::sortR() { sort(array,array+size); }

template <typename T>
void Array<T>::show() { for(T elem : array) cout<<elem<<", "; cout<<endl;}

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
