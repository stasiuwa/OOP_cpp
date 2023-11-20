//
// Created by student on 20.11.2023.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age;
    void show() const;
};

void Person::show() const {
    cout<<"name: "<<name<<" age: "<<age<<endl;
}

#endif //UNTITLED_PERSON_H
