#include <iostream>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
using namespace std;

int main() {

    Student s1[3];
    Student* s2;
    Student* s3[3];
    Student** s4;

    for (int i=0; i<3; i++){
        s1[i].init("Przemek", "Ferguson", 18+i);
        s1[i].setIndex("2137");
    }
    s2 = new Student[3];
    for (int i=0; i<3; i++){
        s2[i].init("Włodzimierz", "Biały", 35+i);
        s2[i].setIndex("1337");
    }
    for (int i=0; i<3; i++){
        s3[i]=new Student("Jessie", "Różowy", 25+i, "7331");
    }
    s4 = new Student * [4];
    for (int i=0; i<3; i++){
        s4[i]=new Student("Włodi", "Jagiełło", 55, "1410");
    }



//    cout<<"\nObiekty klasy Person"<<endl;
//    Person o1("Kamil","Zdun",15);
//    o1.showInfoPerson();
//    cout<<"Czy pelnoletnia?: "<<o1.is_18()<<endl;
//    o1.setAge(20);
//
//    cout<<"\nObiekty klasy Teacher"<<endl;
//    Teacher n1("Krzysztof", "Łęcina", 56, 30, "Phd");
//    n1.showInfoTeacher();
//    cout<<"Czy ma Phd?: "<<n1.is_Phd()<<endl;
//    n1.setAge(34);
//    Person p1[3];
//    Person* p2;
//    Person* p3[3];
//    Person** p4;
//
//    for (int i=0; i<3; i++){
//        p1[i].init("Michał", "Baron", 20+i);
//        p1[i].showInfoPerson();
//    }
//
//    p2=new Person[3];
//    for (int i=0; i<3; i++){
//        p2[i].init("Mateusz", "Baxton", 20+i);
//        p2[i].showInfoPerson();
//    }
//    for (int i=0; i<3; i++){
//        p3[i]=new Person("Katarzyna", "Cichopek", 20+i);
//        p3[i]->showInfoPerson();
//    }
//    p4=new Person * [3];
//    for (int i=0; i<3; i++){
//        p4[i]=new Person("Remigiusz", "Kuban", 20+i);
//        p4[i]->showInfoPerson();
//    }
//    for (int i=0; i<3; i++){
//        delete p3[i];
//    }
//    for (int i=0; i<3; i++){
//        delete p4[i];
//    }
//    delete [] p4;
    return 0;
}
