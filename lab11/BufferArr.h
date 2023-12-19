//
// Created by milit on 19.12.2023.
//

#ifndef OOP_C_BUFFERARR_H
#define OOP_C_BUFFERARR_H

#include <iostream>
#include <memory>

#include "Buffer.h"
class BufferArr: public Buffer{
private:
    int size, counter;
    std::unique_ptr<int[]> arr;
public:
    explicit BufferArr(int size1);
    ~BufferArr() { std::cout<<"Destrukotr BufferArr"<<std::endl; }

    void add(int a);
    void write();

    int getSize() const;

    void setSize(int size);

    int getCounter() const;

    void setCounter(int counter);

    const std::unique_ptr<int[]> &getArr() const;

    void setArr(const std::unique_ptr<int[]> &arr);


};


#endif //OOP_C_BUFFERARR_H
