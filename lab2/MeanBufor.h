//
// Created by milit on 17.10.2023.
//

#ifndef UNTITLED_MEANBUFOR_H
#define UNTITLED_MEANBUFOR_H
#include "Bufor.h"

class MeanBufor: public Bufor {
public:
    MeanBufor();
    MeanBufor(int size1);

    double calculate() override;
    double calculate(int i);
};


#endif //UNTITLED_MEANBUFOR_H
