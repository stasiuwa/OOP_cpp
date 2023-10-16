//
// Created by student on 16.10.2023.
//

#ifndef UNTITLED_TEAMLEADER_H
#define UNTITLED_TEAMLEADER_H

#include "Employee.h"

class TeamLeader: public Employee{
public:
    TeamLeader(const std::string &surname, int age, int exp, int salary);

    TeamLeader();

    void show() override;

    int calculateSalary(int value) override;
};


#endif //UNTITLED_TEAMLEADER_H
