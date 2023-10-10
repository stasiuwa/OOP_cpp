//
// Created by milit on 09.10.2023.
//

#include "Dog.h"


Dog::Dog(string breed1, int guideLevel, int trackerLevel):
        Animal(4,"pies", true){
    breed=breed1;
    levelOfGuideSkills=guideLevel;
    levelOfTrackerSkills=trackerLevel;
//    levelOfGuideSkills=(guideLevel >= 1 && guideLevel <=10) ? guideLevel : 0;
//    levelOfTrackerSkills=(trackerLevel >= 1 && trackerLevel <= 10) ? trackerLevel : 0;
}

Dog::Dog(int limbNr1, string name1, bool protectedAnimal1):
        Animal(limbNr1,name1, protectedAnimal1) {
    setLimbNr(limbNr1);
    setName(name1);
    setProtectedAnimal(protectedAnimal1);
}
Dog::Dog(){}

void Dog::setSkillLevel(int type, int value) {
    (type == 1) ? levelOfGuideSkills = value : levelOfTrackerSkills = value;
}

int Dog::getSkillLevel(int type) {
    int value1 = (type == 1) ? levelOfGuideSkills : levelOfTrackerSkills;
    return (value1 >= 1 && value1 <=10) ? value1 : 0;
}

void Dog::giveVoice() {
    cout<<"Hau,l hau"<<endl;
}

void Dog::info() {

    cout<<"\nRasa: " << breed
        <<"\t Poziom przewodnictwa: " << levelOfGuideSkills
        <<"\t Poziom tropienia: " << levelOfTrackerSkills
    <<endl;
}

void Dog::howManyTrackerDogs(Dog *arr, int size) {
    for(int i=0; i<size; i++){
           if(arr[i].getSkillLevel(2) > arr[i].getSkillLevel(1)) {
               cout << "Rasa: " << arr[i].breed << endl;
               //arr[i].info();
           }
    }
}






