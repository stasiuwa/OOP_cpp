//
// Created by student on 16.10.2023.
//

#ifndef UNTITLED_FIGURE_H
#define UNTITLED_FIGURE_H


class Figure {
private:
    float area;
    float perimeter;
public:
    Figure();
    virtual ~Figure();
    float getArea();
    float getPerimeter();
    void setArea(float area1);
    void setPerimeter(float perimeter1);
    virtual void calculateArea()=0;
    virtual void calculatePerimeter()=0;
    virtual void show();
};


#endif //UNTITLED_FIGURE_H
