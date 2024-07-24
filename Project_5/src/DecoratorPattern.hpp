#pragma once
#include <string>

using std::string;

//Componnent
class Coffee_t {
    public:
    virtual ~Coffee_t() {}
    virtual string Type(void) const = 0;
    virtual string Cost(void) const = 0;
};

//Concrete Componnent
class Espresso_t : public Coffee_t {
    public:
    string Type(void) const override {
        return "Espresso!";
    }
    string Cost(void) const override {
        return "20 Euro!";
    }
};

//Decorator
class Decorator_t : public Coffee_t {
    public:
    Decorator_t(Coffee_t* coffeeObj) : coffeeObj(coffeeObj) {}
    string Type(void) const override {
        return this->coffeeObj->Type();
    }
    string Cost(void) const override {
        return this->coffeeObj->Cost();
    }
    private:
    Coffee_t* coffeeObj;
};

//Concrete Decorator
class Milk_t : public Decorator_t {
    public:
    Milk_t(Coffee_t* coffeeObj) : Decorator_t(coffeeObj) {}
    string Type(void) const override {
        return this->coffeeObj->Type() + "Milk";
    }
    string Cost(void) const override {
        return this->coffeeObj->Cost() + "10 Euro";
    }
    private:
    Coffee_t* coffeeObj;
};

