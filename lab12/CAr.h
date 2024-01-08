//
// Created by student on 08.01.2024.
//

#ifndef OOP_C_CAR_H
#define OOP_C_CAR_H

#include <iostream>
using namespace std;

class CAr {
private:
    string brand;
    int prod_year;
    double engine_cap;
public:
    CAr(const string &brand, int prodYear, double engineCap);

    void show(){
        cout<<"MARKA: "<<brand<<"\nROCZNIK:"<<prod_year<<"\nPOJEMNOSC:"<<engine_cap<<"\n"<<endl;
    }

    const string &getBrand() const;

    void setBrand(const string &brand);

    int getProdYear() const;

    void setProdYear(int prodYear);

    double getEngineCap() const;

    void setEngineCap(double engineCap);
};


#endif //OOP_C_CAR_H
