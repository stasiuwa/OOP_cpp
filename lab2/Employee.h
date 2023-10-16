//
// Created by student on 16.10.2023.
//

#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H

#include <iostream>

class Employee {
private:
    std::string surname;
    int age, exp, salary;
public:
    Employee();
    Employee(const std::string &surname, int age, int exp, int salary);
    virtual ~Employee();

    virtual void show();
    virtual int calculateSalary(int value) = 0;
    int ageEmployment();

    const std::string &getSurname() const;
    void setSurname(const std::string &surname);

    int getAge() const;
    void setAge(int age);

    int getExp() const;
    void setExp(int exp);

    int getSalary() const;
    void setSalary(int salary);

    void whoWorkMoreThan5Years(Employee **employees, int size);
    void howManyEarnLessThanMeanSalary(Employee **employees, int size);

};


#endif //UNTITLED_EMPLOYEE_H
