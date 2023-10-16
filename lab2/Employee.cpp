//
// Created by student on 16.10.2023.
//

#include "Employee.h"

Employee::Employee() {}

Employee::Employee(const std::string &surname, int age, int exp, int salary) : surname(surname), age(age), exp(exp),
                                                                               salary(salary) {}

const std::string &Employee::getSurname() const {
    return surname;
}

void Employee::setSurname(const std::string &surname) {
    Employee::surname = surname;
}

int Employee::getAge() const {
    return age;
}

void Employee::setAge(int age) {
    Employee::age = age;
}

int Employee::getExp() const {
    return exp;
}

void Employee::setExp(int exp) {
    Employee::exp = exp;
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(int salary) {
    Employee::salary = salary;
}

int Employee::ageEmployment() {
    return age-exp;
}

void Employee::show() {
    std::cout
        <<"PRACOWNIK"
        <<"\nnazwisko: "<<surname
        <<"\nwiek: "<<age
        <<"\ndoświadczenie: "<<exp
        <<"\nwynagrodzenie: "<<salary
    <<std::endl;
}

void Employee::whoWorkMoreThan5Years(Employee **employees, int size) {
    for (int i=0; i<size; i++){ if( employees[i]->getAge() > 5 ) employees[i]->show(); }
}
void Employee::howManyEarnLessThanMeanSalary(Employee **employees, int size) {
    int salarySum = 0, counter=0;
    for (int i=0; i<size; i++) {
        salarySum += employees[i]->getSalary();
    }
    float salaryMean = (float)salarySum/(float)size;
    for (int i=0; i<size; i++){
        if( employees[i]->getSalary() < salaryMean ) counter++;
    }
}
