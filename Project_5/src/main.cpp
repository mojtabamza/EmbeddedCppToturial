#include <iostream>
#include "DecoratorPattern.hpp"


using std::cout;
using std::endl;


int main() {
    cout << "Decorator Pattern Project" << endl;

    Coffee_t* newCoffee = new Espresso_t();
    cout << newCoffee->Type() << "\t" << newCoffee->Cost() << endl;

    Coffee_t* newCoffeeMilk = new Milk_t(new Espresso_t());
    cout << newCoffeeMilk->Type() << "\t" << newCoffeeMilk->Cost() << endl;

    delete newCoffeeMilk;
    delete newCoffee;

    return 0;
}