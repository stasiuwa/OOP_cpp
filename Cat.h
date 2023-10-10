//
// Created by milit on 10.10.2023.
//

#ifndef UNTITLED_CAT_H
#define UNTITLED_CAT_H
#define N 5
#include "Animal.h"

class Cat: public Animal{
private:
    int levelOfMouseHunting;
    int mice[N];
public:
    Cat(int limbNr1, string name1, bool protectedAnimal1);
    Cat();

    void initMice(int* mice1);
    void initCat(int levelOfMiceHunting1, int* mice1);
    void setLevelOfMouseHunting(int value);
    int getLevelOfMouseHunting();
    int getMice(int index);
    void getVoice();
    void info();

    static void howManyCats(Cat* arr, int size);
};


#endif //UNTITLED_CAT_H
