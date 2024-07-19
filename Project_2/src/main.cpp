#include <iostream>
#include "LinkedList.hpp"

using std::cout;
using std::endl;

int main(void) {
    cout << "Linked List Project" << endl;
    LinkedList_t myList;
    myList.push_back(0);
    myList.push_back(1);
    myList.print();
    return 0;
}