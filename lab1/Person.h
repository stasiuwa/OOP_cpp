//
// Created by student on 09.10.2023.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <iostream>

using namespace std;

class Person {
private:
    string name, surname;
    int age;
public:
    Person(string name1, string surname1, int age1);
    Person();
    void setAge(int age1);
    string getSurname();
    bool is_18();
    void showInfoPerson();
    void init(string name1, string surname1, int age1);
};


#endif //UNTITLED_PERSON_H
