//
// Created by milit on 20.12.2023.
//

#ifndef OOP_C_WAREHOUSE_H
#define OOP_C_WAREHOUSE_H

#include <iostream>
#include <memory>

class Warehouse {
private:
    std::string product;
    int quantity;
public:
    Warehouse(const std::string &product, int quantity);
    ~Warehouse();

    void info();

    const std::string &getProduct() const;
    void setProduct(const std::string &product);
    int getQuantity() const;
    void setQuantity(int quantity);
};


#endif //OOP_C_WAREHOUSE_H
