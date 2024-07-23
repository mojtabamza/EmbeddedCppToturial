#include <iostream>
#include "SortingStrategy.hpp"


using std::cout;
using std::endl;



int main(void) {

    cout << "Strategy Pattern Project" << endl;

    BubbleSort_t bubble;
    QuickSort_t quick;
    Sorter_t sorterObj(&bubble);

    sorterObj.RunSorting();
    sorterObj.SetStrategy(&quick);
    sorterObj.RunSorting();
    
    
    
    return 0;
}