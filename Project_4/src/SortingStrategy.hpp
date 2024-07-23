#pragma once
#include <iostream>

using std::cout;
using std::endl;

class SortingStrategy_t {
    public:
    virtual void Sort(void) = 0;
};

class BubbleSort_t : public SortingStrategy_t {
    public:
    void Sort(void) override {
        cout << "Sorting by Bubble sort" << endl;
    }
};

class QuickSort_t : public SortingStrategy_t {
    public:
    void Sort(void) override {
        cout << "Sorting by Quick sort" << endl;
    }
};

class Sorter_t {
    public:
    Sorter_t(SortingStrategy_t* sortingStrategyObj) : sortingStrategyObj(sortingStrategyObj) {}
    void SetStrategy(SortingStrategy_t* sortingStrategyObj) {
        this->sortingStrategyObj = sortingStrategyObj;
    }
    void RunSorting(void) {
        this->sortingStrategyObj->Sort();
    }
    private:
    SortingStrategy_t* sortingStrategyObj;
};

