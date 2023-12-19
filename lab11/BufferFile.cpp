//
// Created by milit on 19.12.2023.
//

#include "BufferFile.h"
#include <utility>

BufferFile::BufferFile(std::string path1) {
    BufferFile::path = path1;
    std::cout<<"Konstrukotr BufferFile"<<std::endl;
}

BufferFile::~BufferFile() {
    std::cout<<"Destruktor BufferFile"<<std::endl;
}

void BufferFile::add(int a) {
    std::ofstream fileOf(path, std::ios::app);
    if(fileOf.is_open()){
        fileOf << a << std::endl;
        fileOf.close();
    }
    else std::cerr<<"Nie udalo sie otworzyc pliku"<<path<<std::endl;
}

void BufferFile::write() {
    std::ifstream fileIf(path);
    if(fileIf.is_open()){
        std::string line;
        while (std::getline(fileIf, line)) std::cout<<line<<std::endl;
    }
    else std::cerr<<"nie udalo sie otworzyc pliku"<<std::endl;
}
