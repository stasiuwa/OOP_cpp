//
// Created by milit on 20.11.2023.
//

#ifndef ADV_OOP_C_CONTACT_H
#define ADV_OOP_C_CONTACT_H

#include <iostream>
using namespace std;


class Contact {
public:
    //phone_number jest wartością unikalna
    string name, surname, address;
    int age, phone_number;

    Contact(const string &name, const string &surname, const string &address, int age, int phoneNumber);

    void show() const;
};


#endif //ADV_OOP_C_CONTACT_H
