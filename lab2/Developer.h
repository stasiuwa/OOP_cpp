//
// Created by student on 16.10.2023.
//

#ifndef UNTITLED_DEVELOPER_H
#define UNTITLED_DEVELOPER_H

#include "Employee.h"

class Developer: public Employee{
public:
    Developer(const std::string &surname, int age, int exp, int salary);

    Developer();

    int calculateSalary(int value) override;
};


#endif //UNTITLED_DEVELOPER_H
