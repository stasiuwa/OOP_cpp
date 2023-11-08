//
// Created by milit on 08.11.2023.
//

#ifndef UNTITLED_CITIZEN_H
#define UNTITLED_CITIZEN_H
#include <iostream>

class Citizen {
private:
    std::string name;
    std::string surname;
    int age;
    char sex;
    std::string postal_code;
public:
    Citizen(const std::string &name, const std::string &surname, int age, char sex, const std::string &postalCode);
    Citizen();

    void showCitizen();

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);

    int getAge() const;

    void setAge(int age);

    char getSex() const;

    void setSex(char sex);

    const std::string &getPostalCode() const;

    void setPostalCode(const std::string &postalCode);
};


#endif //UNTITLED_CITIZEN_H
