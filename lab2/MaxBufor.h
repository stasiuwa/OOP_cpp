//
// Created by milit on 17.10.2023.
//

#ifndef UNTITLED_MAXBUFOR_H
#define UNTITLED_MAXBUFOR_H

#include "Bufor.h"

class MaxBufor: public Bufor {
public:
    MaxBufor();
    MaxBufor(int size1);

    void add(int value) override;

    double calculate() override;
};


#endif //UNTITLED_MAXBUFOR_H
