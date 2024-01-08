//
// Created by student on 08.01.2024.
//

#include "CAr.h"

CAr::CAr(const string &brand, int prodYear, double engineCap) : brand(brand), prod_year(prodYear),
                                                                engine_cap(engineCap) {}

const string &CAr::getBrand() const {
    return brand;
}

void CAr::setBrand(const string &brand1) {
    CAr::brand = brand1;
}

int CAr::getProdYear() const {
    return prod_year;
}

void CAr::setProdYear(int prodYear) {
    prod_year = prodYear;
}

double CAr::getEngineCap() const {
    return engine_cap;
}

void CAr::setEngineCap(double engineCap) {
    engine_cap = engineCap;
}
