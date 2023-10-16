//
// Created by milit on 09.10.2023.
//

#ifndef UNTITLED_DOG_H
#define UNTITLED_DOG_H
#include "Animal.h"

class Dog: public Animal {
private:
    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
public:
    Dog(string breed1, int guideLevel, int trackerLevel);
    Dog(int limbNr1, string name1, bool protectedAnimal1);
    Dog();

    void setSkillLevel(int type, int value); /// type = 1 dla levelofGuideSkills, != 1 dla levelofTrackerSkills
    int getSkillLevel(int type);
    void giveVoice();
    void info();

    static void howManyTrackerDogs(Dog* arr, int size);
};


#endif //UNTITLED_DOG_H
