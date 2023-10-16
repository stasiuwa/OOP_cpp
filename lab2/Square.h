//
// Created by student on 16.10.2023.
//

#ifndef UNTITLED_SQUARE_H
#define UNTITLED_SQUARE_H
#include "Figure.h"

class Square: public Figure{
private:
    float a;
public:
    Square(float a1);
    ~Square();
    virtual void calculateArea() override;
    virtual void calculatePerimeter() override;
    virtual void show() override;
};


#endif //UNTITLED_SQUARE_H
