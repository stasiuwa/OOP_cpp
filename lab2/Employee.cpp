//
// Created by student on 16.10.2023.
//

#include "Employee.h"

Employee::Employee() {
    std::cout<<"Konstruktor bezargumentowy klasy bazowej Employee"<<std::endl;
}

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
        <<"\twiek: "<<age
        <<"\tdoswiadczenie: "<<exp
        <<"\twynagrodzenie: "<<salary
    <<std::endl;
}

void Employee::whoWorkMoreThan5Years(Employee **employees, int size) {
    std::cout<<"KTO PRZEPRACOWAL +5 LAT: "<<std::endl;
    for (int i=0; i<size; i++){ if( employees[i]->getExp() > 5 ) employees[i]->show(); }
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
    std::cout<<"ILU ZARABIA MNIEJ NIZ SREDNIA = " << salaryMean << " : " << counter <<std::endl;
}

Employee::~Employee() {
    std::cout<<"Destruktor wirtualny klasy bazowej Employee"<<std::endl;
}
