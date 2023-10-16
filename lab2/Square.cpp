//
// Created by student on 16.10.2023.
//
#include <iostream>

#include "Figure.h"
#include "Square.h"

using namespace std;

Square::Square(float a1): Figure() {
    a=a1;
    cout<<"Konstruktor klasy Square"<<endl;
}
Square::~Square() {
    cout<<"Destrukotr klasy Square"<<endl;
}
void Square::calculateArea() {
    float p=a*a;
    setArea(p);
}
void Square::calculatePerimeter() {
    float l=4*a;
    setPerimeter(l);
}
void Square::show() {
    cout<<"Show w klasie Square, pole: " << getArea() << "\t obwod: " << getPerimeter() << endl;
}