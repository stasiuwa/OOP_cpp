//
// Created by milit on 20.12.2023.
//

#include "Shop.h"

Shop::Shop(std::string name) : name(name) {}
Shop::~Shop() {
    std::cout<<"Destruktor Shop"<<std::endl;
}

void Shop::addWarehouse(std::shared_ptr<Warehouse> warehouse) {
    warehouses.push_back(std::move(warehouse));
}
void Shop::sellItem(std::string name, int quantity) {
    for (std::shared_ptr<Warehouse> ptr : warehouses) {
        if(ptr->getProduct() == name && ptr->getQuantity() >= quantity) std::cout<<"Towar dostepny."<<std::endl;
        else std::cout<<"Wyprzedano"<<std::endl;
    }
}
void Shop::showWarehouses() {
    std::cout<<"Magazyny: ";
    for (std::shared_ptr<Warehouse> ptr : warehouses) std::cout<<ptr.get()<<", ";
    std::cout<<std::endl;
}

void Shop::showName() {
    std::cout<<"Sklep: "<<name<<std::endl;
}
