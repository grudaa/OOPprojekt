#pragma once
#include <map>
#include <list>
#include <iostream>
#include <vector>
#include "item.h"

class Dish
{
public:
    Dish(std::string name = "dish");

    //setteri

private:
    std::string name;
    std::map<std::string, Item> ingredients;
};
