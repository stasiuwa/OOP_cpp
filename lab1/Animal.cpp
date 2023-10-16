//
// Created by milit on 09.10.2023.
//

#include "Animal.h"


Animal::Animal(int limbNr1, string name1, bool protectedAnimal1) {
    limbNr=limbNr1;
    name=name1;
    protectedAnimal=protectedAnimal1;
}

void Animal::setLimbNr(int limbNr1) {
    limbNr = limbNr1;
}

void Animal::setName(const string name1) {
    name = name1;
}

void Animal::setProtectedAnimal(bool protectedAnimal1) {
    protectedAnimal = protectedAnimal1;
}

void Animal::giveVoice() {
    cout<<"\nChrum, miau, hau, piii"<<endl;

}

void Animal::info() {
    cout<<"\nZwierze: " << name << "\t Konczyny: " << limbNr << "\t Chronione: ";
    if(protectedAnimal) cout<<"tak"<<endl;
    else cout<<"nie"<<endl;
}

Animal::Animal() {

}

int Animal::howManyProtectedAnimals(Animal *arr, int size) {
    int counter=0;
    for(int i=0;i<size; i++){
        if(arr[i].protectedAnimal) counter++;
    }
    return counter;
}


