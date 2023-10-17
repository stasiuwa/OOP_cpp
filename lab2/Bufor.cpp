//
// Created by milit on 17.10.2023.
//

#include "Bufor.h"

int Bufor::getFirstFreeIndex() {
    return Bufor::firstFreeIndex;
}

int Bufor::getArraySize() {
    return Bufor::arraySize;
}

int Bufor::getTab(int i) {
    return Bufor::array[i];
}

void Bufor::setFirstFreeIndex(int index) {
    Bufor::firstFreeIndex = index;
}

void Bufor::setTab(int position, int value) {
    Bufor::array[position] = value;
}

void Bufor::show() {
    std::cout<<"TABLICA: [ ";
    for(int i=0; i<getArraySize(); i++){
        std::cout<<getTab(i)<<", ";
    }
    std::cout<<"]"<<std::endl;
}

void Bufor::add(int value) {
    setTab(getFirstFreeIndex(),value);
    setFirstFreeIndex(getFirstFreeIndex()+1);
}

Bufor::~Bufor() {
    delete array;
}

Bufor::Bufor() {
    Bufor::array = new int [10];
    setArraySize(10);
    setFirstFreeIndex(0);
    std::cout<<"Stworzono tablice konstruktorem bezargumentowym!"<<std::endl;
}

Bufor::Bufor(int size1) {
    Bufor::array = new int[size1];
    setArraySize(size1);
    setFirstFreeIndex(0);
    std::cout<<"Stworzono tablice konstruktorem argumentowym!"<<std::endl;
}

void Bufor::setArraySize(int arraySize1) {
    Bufor::arraySize = arraySize1;
}
