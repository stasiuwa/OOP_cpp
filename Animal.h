//
// Created by milit on 09.10.2023.
//

#ifndef UNTITLED_ANIMAL_H
#define UNTITLED_ANIMAL_H

#include <iostream>

using namespace std;

class Animal {
private:
    int limbNr;
    string name;
    bool protectedAnimal;
public:
    Animal(int limbNr1, string name1, bool = true);
    Animal();

    void setLimbNr(int limbNr1);
    void setName(const string name1);
    void setProtectedAnimal(bool protectedAnimal1);

    void giveVoice();
    void info();

    static int howManyProtectedAnimals(Animal* arr, int size);
};



#endif //UNTITLED_ANIMAL_H
