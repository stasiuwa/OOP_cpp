//
// Created by milit on 17.10.2023.
//

#include "MeanBufor.h"

double MeanBufor::calculate() {
    int suma=0;
    for (int i=0; i<getArraySize(); i++) suma+= getTab(i);
    return (double)suma/getArraySize();
}

MeanBufor::MeanBufor() : Bufor() {}

MeanBufor::MeanBufor(int size1) : Bufor(size1) {}

double MeanBufor::calculate(int i) {
    return 0;
}
