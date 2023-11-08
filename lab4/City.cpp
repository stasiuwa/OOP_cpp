//
// Created by milit on 08.11.2023.
//

#include "City.h"

City::City(const std::string &cityName) : city_name(cityName) {}

void City::addCitizen(Citizen citizen) {
    citizens.push_back(citizen);
}
void City::deleteCitizen(std::string surname, int age) {
    citizens.erase(std::remove_if(citizens.begin(), citizens.end(), [surname, age](const Citizen &c)
    {
        return (c.getName() == surname) && (c.getAge() == age);
    }));
}

void City::showCitizens() {
    for(Citizen c : citizens) c.showCitizen();
}

void City::showCity() {
    std::cout<<"\t"<<city_name<<std::endl;
}

int City::countWomen() {
    return std::count_if(citizens.begin(), citizens.end(), [](Citizen &c){
        return c.getSex() == 'k';
    });
}

int City::countCitizens() {
    return citizens.size();
}

int City::countAdults() {
    return std::count_if(citizens.begin(), citizens.end(), [](Citizen &c){
       return c.getAge() >= 18;
    });
}

int City::countPostalCodes() {
    std::map<std::string,int> postalCode;
    for(Citizen c : citizens){
        postalCode[c.getPostalCode()]++;
    }
    return int(postalCode.size());
}

void City::showCities(std::vector<City> cities) {
    for(City c : cities) c.showCity();
}

void City::theMost(std::vector<City> cities, int mode) {
//    (mode==1) ? [](std::vector<City> cities, int mode){
//        City max = cities[0];
//        for(City c : cities) {
//            if(c.countPostaCodes()>max.countPostalCodes()) max=c;
//        }
//        std::cout<<"Najwiecej unikalnych kodow pocztowych: ";
//        max.showCity();
//        std::cout<<std::endl;
//    } : [](std::vector<City> cities, int mode){
//        City min = cities[0];
//        for(City c : cities) {
//            if(c.countCitizens()<min.countCitizens()) min=c;
//        }
//        std::cout<<"Najmniejsza populacja: ";
//        min.showCity();
//        std::cout<<std::endl;
//    };
//    switch lepszy, lambdy napisane bardziej for fun
    City temp = cities[0];
    switch (mode) {
        case 1:
            for(City c : cities) {
                if(c.countPostalCodes() > temp.countPostalCodes()) temp=c;
            }
            std::cout<<"Najwiecej unikalnych kodow pocztowych: ";
            temp.showCity();
            std::cout<<std::endl;
            break;
        case 2:
            for(City c : cities) {
                if(c.countCitizens()<temp.countCitizens()) temp=c;
            }
            std::cout<<"Najmniejsza populacja: ";
            temp.showCity();
            std::cout<<std::endl;
            break;
        default:
            std::cout<<"Wybrano zly tryb"<<std::endl;

    }
}

void City::statistic(std::vector<City> cities) {
    for(City c : cities){
        c.showCity();
        std::cout << "Populacja: " << c.countCitizens() << std::endl;
        std::cout << "Chopy: " << c.countCitizens() - c.countWomen() << std::endl;
        std::cout << "Baby: " << c.countWomen() << std::endl;
        std::cout << "Dorosli: " << c.countAdults() << std::endl;
        std::cout << "Malolaty: " << c.countCitizens() - c.countAdults() << std::endl;
        std::cout << std::endl;
    }
}

void City::sortCities(std::vector<City> &cities) {
    sort(cities.begin(), cities.end(), [](City c1, City c2){
        return c1.countCitizens() < c2.countCitizens();
    });
}

void City::showPostalCodes() {
    std::map<std::string,int> postalCode;
    for(Citizen c : citizens){
        postalCode[c.getPostalCode()]++;
    }
    for(std::pair<std::string,int> p : postalCode) std::cout<<p.first<<" - "<<p.second<<", ";
    std::cout<<std::endl;
}


