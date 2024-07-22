#pragma once

#include <vector>
#include <algorithm>
using std::vector;

class Observer_t {
    public:
    virtual void Update(void) = 0;
};

class Observable_t {
    public:
    void Attach(Observer_t& observer) {
        observers.push_back(&observer);
    }
    void Detach(Observer_t& observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), &observer), observers.end());
    }
    void Notify(void) {
        for(auto observer : observers) {
            observer->Update();
        }
    }
    private:
    vector<Observer_t*> observers;
};