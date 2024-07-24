#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// Component (Abstract Coffee)
class Coffee_t {
public:
    virtual ~Coffee_t() {}
    virtual string Type() const = 0;
    virtual string Cost() const = 0;
};

// Concrete Component (Espresso)
class Espresso_t : public Coffee_t {
public:
    string Type() const override {
        return "Espresso!";
    }
    string Cost() const override {
        return "20 Euro!";
    }
};

// Decorator
class Decorator_t : public Coffee_t {
protected:
    Coffee_t* coffeeObj;

public:
    Decorator_t(Coffee_t* coffeeObj) : coffeeObj(coffeeObj) {}
    string Type() const override {
        return coffeeObj->Type();
    }
    string Cost() const override {
        return coffeeObj->Cost();
    }
};

// Concrete Decorator (Milk)
class Milk_t : public Decorator_t {
public:
    Milk_t(Coffee_t* coffeeObj) : Decorator_t(coffeeObj) {}
    string Type() const override {
        return coffeeObj->Type() + " Milk";
    }
    string Cost() const override {
        return coffeeObj->Cost() + " + 10 Euro";
    }
};


