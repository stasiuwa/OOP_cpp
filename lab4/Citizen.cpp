//
// Created by milit on 08.11.2023.
//

#include "Citizen.h"

Citizen::Citizen(const std::string &name, const std::string &surname, int age, char sex, const std::string &postalCode)
        : name(name), surname(surname), age(age), sex(sex), postal_code(postalCode) {

}

Citizen::Citizen() {

}

const std::string &Citizen::getName() const {
    return name;
}

void Citizen::setName(const std::string &name) {
    Citizen::name = name;
}

const std::string &Citizen::getSurname() const {
    return surname;
}

void Citizen::setSurname(const std::string &surname) {
    Citizen::surname = surname;
}

int Citizen::getAge() const {
    return age;
}

void Citizen::setAge(int age) {
    Citizen::age = age;
}

char Citizen::getSex() const {
    return sex;
}

void Citizen::setSex(char sex) {
    Citizen::sex = sex;
}

const std::string &Citizen::getPostalCode() const {
    return postal_code;
}

void Citizen::setPostalCode(const std::string &postalCode) {
    postal_code = postalCode;
}

void Citizen::showCitizen() {
    std::cout << "Imie: " << name << " Nazwisko: " << surname << " Wiek: " << age << " Plec: " << sex << " Kod pocztowy: " << postal_code << std::endl;
}
