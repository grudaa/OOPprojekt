#include "item.h"
#include <iostream>

// konstruktor
Item::Item(std::string name, std::string unit, int quantity, int minQuantity)
{
    setName(name);
    setUnit(unit);
    setQuantity(quantity);
    setMinQuantity(minQuantity);
}

// geteri
std::string Item::getName()
{
    return name;
}

std::string Item::getUnit()
{
    return unit;
}

int Item::getQuantity()
{
    return quantity;
}

int Item::getMinQuantity()
{
    return minQuantity;
}

// seteri
void Item::setName(std::string name)
{
    this->name = name;
}

void Item::setUnit(std::string unit)
{
    this->unit = unit;
}

bool Item::setQuantity(int quantity)
{
    if (quantity < 0)
    {
        std::cout << "Invalid value for quantity" << std::endl;
        return false;
    }
    this->quantity = quantity;
    return true;
}

bool Item::setMinQuantity(int minQuantity)
{
    if (minQuantity < 0)
    {
        std::cout << "Invalid value for min quantity" << std::endl;
        return false;
    }
    this->minQuantity = minQuantity;
    return true;
}

// info
void Item::info()
{
    std::cout << "Item: " << name << std::endl;
    std::cout << "Unit: " << unit << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Minimum Quantity: " << minQuantity << "\n"
              << std::endl;
}