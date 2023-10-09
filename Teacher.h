//
// Created by student on 09.10.2023.
//

#ifndef UNTITLED_TEACHER_H
#define UNTITLED_TEACHER_H
#include "Person.h"
class Teacher: public Person{
private:
    int experience;
    string title;
public:
    Teacher(string name1, string surname1, int age1, int experience1, string title1);
    Teacher();
    void setTitle(string Title);
    int getExperience();
    bool is_Phd();
    void showInfoTeacher();
};


#endif //UNTITLED_TEACHER_H
