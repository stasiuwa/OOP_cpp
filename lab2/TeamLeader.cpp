//
// Created by student on 16.10.2023.
//

#include "TeamLeader.h"

void TeamLeader::show() {
    Employee::show();
    std::cout<<"Jestem Team Leaderem z " << getExp() << " letnim doświadczeniem" << std::endl;
}

int TeamLeader::calculateSalary(int value) {
    return value*(1+getSalary()+getExp());
}

TeamLeader::TeamLeader(const std::string &surname, int age, int exp, int salary) : Employee(surname, age, exp,
                                                                                            salary) {}

TeamLeader::TeamLeader() {}
