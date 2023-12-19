//
// Created by milit on 19.12.2023.
//

#ifndef OOP_C_BUFFERFILE_H
#define OOP_C_BUFFERFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <memory>

#include "Buffer.h"

class BufferFile: public Buffer{
private:
    std::string path;
public:
    explicit BufferFile(std::string path1);
    ~BufferFile();
    void add(int a);
    void write();
};


#endif //OOP_C_BUFFERFILE_H
