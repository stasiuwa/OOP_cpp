//
// Created by milit on 19.12.2023.
//

#include "BufferArr.h"

BufferArr::BufferArr(int size1) {
    setSize(size1);
    setCounter(0);
    BufferArr::arr = std::unique_ptr<int[]> (new int[size1]);
}

void BufferArr::add(int a) {
    if(counter<size) {
        arr[counter] = a;
        counter++;
    }
    else std::cout<<"Brak miejsca w tablicy!"<<std::endl;
}

void BufferArr::write() {
    for(int i=0; i<size; i++) std::cout<< arr[i] << " " << std::endl;
}

int BufferArr::getSize() const {
    return size;
}

void BufferArr::setSize(int size) {
    BufferArr::size = size;
}

int BufferArr::getCounter() const {
    return counter;
}

void BufferArr::setCounter(int counter) {
    BufferArr::counter = counter;
}

const std::unique_ptr<int[]> &BufferArr::getArr() const {
    return arr;
}


