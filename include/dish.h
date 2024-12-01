#pragma once
#include <string>
#include <map>
#include <list>
#include <iostream>

class Dish
{
public:
    Dish(std::string name = "dish");

private:
    std::string name;
    // koristit mape s listom te za svako jelo spremiti listu stringova koja predstavlja sastojke
    std::map<std::string, std::list<std::string>> ingredients;
};