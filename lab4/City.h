//
// Created by milit on 08.11.2023.
//

#ifndef UNTITLED_CITY_H
#define UNTITLED_CITY_H
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <map>
#include "Citizen.h"
class City {
private:
    std::vector<Citizen> citizens;
    std::string city_name;
public:
    explicit City(const std::string &cityName);

    void addCitizen(Citizen citizen);
    void deleteCitizen(std::string surname, int age);
    void showCitizens();
    void showCity();
    int countWomen();
    int countCitizens();
    int countAdults();
    int countPostalCodes();
    void showPostalCodes();

    static void showCities(std::vector<City> cities);
    static void theMost(std::vector<City> cities, int mode);
    static void statistic(std::vector<City> cities);
    static void sortCities(std::vector<City> &cities);
};


#endif //UNTITLED_CITY_H
