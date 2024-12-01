#pragma once
#include <string>
#include <map>
#include <list>

class Dish
{
public:
    Dish(std::string name = "dish");

    void addIngredient(const std::string &ingredient, const std::string &dishName)
    {
        ingredients[dishName].push_back(ingredient);
    }

    void removeIngredient(const std::string &ingredient, const std::string &dishName)
    {
        if (ingredients.find(dishName) != ingredients.end())
        {
            ingredients[dishName].remove(ingredient);
        }
    }

    std::list<std::string> getIngredients(const std::string &dishName) const
    {
        auto it = ingredients.find(dishName);
        if (it != ingredients.end())
        {
            return it->second;
        }
        return std::list<std::string>();
    }

private:
    std::string name;
    std::map<std::string, std::list<std::string>> ingredients;
};