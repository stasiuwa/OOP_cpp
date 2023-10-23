//
// Created by milit on 17.10.2023.
//
//
// Created by student on 16.10.2023.
//
#include <iostream>

#include "lab3/Adding.h"
#include "lab3/Student.h"
#include "lab3/Array.h"

using namespace std;

template <typename T>
void mySwap(T& a, T& b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}
template <typename T>
void showAll(T* tab[], int n){
    for(int i=0;i>n;i++) tab[i]->show();
}
template <typename T>
T elMin(T* arr, int size){
    T min = arr[0];
    for(int i=0;i<size;i++) if(arr[i]<min) min=arr[i];
    return min;
}

int main(){
//    Zadanie 3.3

//    Array<int>* a1;
//    a1 = new Array<int>(10);
//    a1->add(11);
//    a1->add(3);
//    a1->add(6);
//    a1->add(1);
//    a1->add(3);
//    a1->show();
//    a1->sortR();
//    a1->show();
//    cout << "max: " << a1->maxElem() << endl;
//    cout << "index: " << a1->search(3) << endl;
//
//    Array<double>* a2;
//    a2 = new Array<double>();
//    a2->add(12.4);
//    a2->add(3.54);
//    a2->add(9.6);
//    a2->add(6.9);
//    cout << "max: " << a2->maxElem() << endl;
//    cout << "index: " << a2->search(1) << endl;
//    a2->show();
//    a2->sortR();
//    a2->show();

//    Zadanie 3.1 3.2
//    double test[6] = {5.42, 1.11, 20.3875, 0, -345.2, -1};
//    double min = elMin(test,6);
//    std::cout<<"elem min= "<<min<<std::endl;

//    double x=5.678, y=76.123;
//    std::cout<<"x = "<<x<<" y = "<<y<<std::endl;
//    mySwap(x,y);
//    std::cout<<"x = "<<x<<" y = "<<y<<std::endl;
//
//    Adding<int>* arrAdd[3];
//    for(int i=0;i<3;i++) arrAdd[i]=new Adding<int>(i);
//    showAll(arrAdd,3);
//
//    Student<std::string>* arrStu[3];
//    for(int i=0;i<3;i++) arrStu[i]=new Student<std::string>(i+2,"Pduzian");
//    showAll(arrStu,3);
//
//    for(int i=0;i<3;i++) delete arrAdd[i];
//    for(int i=0;i<3;i++) delete arrStu[i];

//    Adding<double> a1(5.5);
//    a1.add(5.5);
//    a1.show();
//
//    Adding<std::string> a2("RKS ");
//    a2.add("HUWDU");
//    a2.show();

    return 0;
}