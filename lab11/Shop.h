//
// Created by milit on 20.12.2023.
//

#ifndef OOP_C_SHOP_H
#define OOP_C_SHOP_H

#include <iostream>
#include <vector>
#include <memory>

#include "Warehouse.h"

class Shop {
private:
    std::string name;
    std::vector<std::shared_ptr<Warehouse>> warehouses;
public:
    explicit Shop(std::string name);
    ~Shop();

    void addWarehouse(std::shared_ptr<Warehouse> warehouse);
    void sellItem(std::string name, int quantity);
    void showWarehouses();
    void showName();
};


#endif //OOP_C_SHOP_H
