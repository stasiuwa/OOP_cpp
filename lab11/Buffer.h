//
// Created by milit on 19.12.2023.
//

#ifndef OOP_C_BUFFER_H
#define OOP_C_BUFFER_H

#include <iostream>

class Buffer {
public:
    Buffer() { std::cout<<"Konstruktor Buffer"<<std::endl; }
    ~Buffer() { std::cout<<"Destruktor Buffer"<<std::endl; }
    virtual void add(int a)=0;
    virtual void write()=0;
};


#endif //OOP_C_BUFFER_H
