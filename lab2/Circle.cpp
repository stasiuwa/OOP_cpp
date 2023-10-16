//
// Created by student on 16.10.2023.
//
#include <iostream>

#include "Figure.h"
#include "Circle.h"

using namespace std;

Circle::Circle(float r1) {
    r=r1;
    cout<<"Konstruktor w klasie Circe"<<endl;
}
Circle::~Circle(){
    cout<<"Destruktor w klasie Circle"<<endl;
}
void Circle::calculateArea() {
    float p=3.14*r*r;
    setArea(p);
}
void Circle::calculatePerimeter() {
    float l=2*3.14*r;
    setPerimeter(l);
}