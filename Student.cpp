//
// Created by student on 09.10.2023.
//

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name1, string surname1, int age1, string index1):
            Person(name1, surname1, age1) {
    index=index1;
    cout<<"Konstruktor klasy pochodnej Student"<<endl;
}
Student::Student(){
    cout<<"Konstruktor bez. klasy pochodnej Student"<<endl;
}
void Student::setIndex(std::string newIndex) {
    index=newIndex;
}

string Student::getIndex() {
    return index;
}

void Student::showInfoStudent() {
    cout<<"Numer indeksu: " << index << endl;
    showInfoPerson();
}