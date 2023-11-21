//
// Created by milit on 20.11.2023.
//

#include "Contact.h"

Contact::Contact(const string &name, const string &surname, const string &address, int age, int phoneNumber) : name(
        name), surname(surname), address(address), age(age), phone_number(phoneNumber) {}

void Contact::show() const{
    cout<<phone_number<<" - "<<name<<" "<<surname<<" lat "<<age<<" ul."<<address<<endl;
}


