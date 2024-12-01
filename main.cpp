#include <iostream>
#include <string>
#include "item.h"
#include "dish.h"

int main()
{
    Item egg("Egg", "pcs", 10, 3);
    Item milk("Milk", "l", 10, 1);
    Item flour("Flour", "kg", 5, 1);
    Item sugar;

    egg.info();
    milk.info();
    flour.info();
    sugar.info();

    return 0;
}