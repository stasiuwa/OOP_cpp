//
// Created by student on 16.10.2023.
//

#ifndef UNTITLED_CIRCLE_H
#define UNTITLED_CIRCLE_H

#include "Figure.h"

class Circle: public Figure {
private:
    float r;
public:
     Circle(float r1);
     ~Circle();
     virtual void calculateArea() override;
     virtual void calculatePerimeter() override;

     void foo1();
     void foo2();
     void foo3();
     void foo4();
     void foo5();
};


#endif //UNTITLED_CIRCLE_H
