#pragma once
#include <string>
#define DEFAULT_MIN_QUANTITY 0
#define DEFAULT_QUANTITY 0
#define DEFAULT_UNIT "unit"
#define DEFAULT_NAME "item"

class Item
{
public:
    // konstruktor
    Item(std::string name = DEFAULT_NAME, std::string unit = DEFAULT_UNIT, int quantity = DEFAULT_QUANTITY, int minQuantity = DEFAULT_MIN_QUANTITY);

    // geteri
    std::string getName();
    std::string getUnit();
    int getQuantity();
    int getMinQuantity();

    // seteri
    void setName(std::string name);
    void setUnit(std::string unit);
    bool setQuantity(int quantity);
    bool setMinQuantity(int minQuantity);

    // info
    void info();

private:
    std::string name;
    std::string unit;
    int quantity;
    int minQuantity;
};