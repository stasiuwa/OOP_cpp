//
// Created by student on 16.10.2023.
//

#include "Developer.h"

int Developer::calculateSalary(int value) {
    return value+0.2*value*(getSalary()+getAge());
}

Developer::Developer(const std::string &surname, int age, int exp, int salary) : Employee(surname, age, exp, salary) {}

Developer::Developer() {}
