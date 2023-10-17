//
// Created by milit on 17.10.2023.
//

#include "MaxBufor.h"

MaxBufor::MaxBufor() : Bufor(){}

MaxBufor::MaxBufor(int size1) : Bufor(size1) {}

void MaxBufor::add(int value) {
    if (getFirstFreeIndex()<getArraySize()) Bufor::add(value);
    else std::cout<<"W tablicy nie ma juz miejsca!"<<std::endl;
}

double MaxBufor::calculate() {
    int max=0;
    for (int i=0; i<getArraySize(); i++) if(getTab(i)>=max) max=getTab(i);
    return max;
}
