//
// Created by milit on 17.10.2023.
//

#ifndef UNTITLED_BUFOR_H
#define UNTITLED_BUFOR_H

#include <iostream>

class Bufor {
private:
    int* array;
    int arraySize;
    int firstFreeIndex;
public:
    Bufor();
    Bufor(int size1);
    virtual ~Bufor();

    virtual void add(int value);
    virtual double calculate() = 0;

    int getFirstFreeIndex();

    void setArraySize(int arraySize);

    int getArraySize();
    int getTab(int i);
    void setFirstFreeIndex(int index);
    void setTab(int position, int value);

    void show();
};


#endif //UNTITLED_BUFOR_H
