//
// Created by milit on 10.10.2023.
//

#include "Cat.h"

Cat::Cat(int limbNr1, string name1, bool protectedAnimal1):
    Animal(limbNr1, name1, protectedAnimal1) {
    setLimbNr(limbNr1);
    setName(name1);
    setProtectedAnimal(protectedAnimal1);
}
Cat::Cat() {}

void Cat::initMice(int *mice1) {
    for (int i=0; i<N; i++){
        mice[i] = mice1[i];
    }
}

void Cat::initCat(int levelOfMiceHunting1, int *mice1) {
    setLevelOfMouseHunting(levelOfMiceHunting1);
    initMice(mice1);
}

void Cat::setLevelOfMouseHunting(int value) {
    levelOfMouseHunting = value;
}

int Cat::getLevelOfMouseHunting() {
    return (levelOfMouseHunting >=1 && levelOfMouseHunting <=10) ? levelOfMouseHunting : 0;
}

int Cat::getMice(int index) {
    return (index >=0 && index <=4) ? mice[index] : 0;
}

void Cat::getVoice() {
    cout<<"Miau miau"<<endl;
}

void Cat::info() {
    cout <<"\nUmiejetnosc lowienia myszy: " << levelOfMouseHunting << endl;
    cout<<"Myszy zlowione przez ostatnie 5 lat";
    for (int i=0; i<N; i++){
        cout<<"["<<i<<"] złapał "<<mice[i]<<"mysz."<<endl;
    }
}

void Cat::howManyCats(Cat *arr, int size) {
    for(int i=0; i<size; i++){
        int miceCounter=0;
        for(int j=0; j<5; j++){
            miceCounter+=arr[i].getMice(j);
        }
        cout << "Kot nr [" << i+1 << "] zlapal " << miceCounter << " myszy w przeciagu 5 lat" << endl;
    }
}



