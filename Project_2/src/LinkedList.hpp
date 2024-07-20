
#pragma once 
#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

class Node_t {
    public:
    Node_t(int value) : value(value), next(nullptr) {}
    int value;
    Node_t* next;
};
class LinkedList_t {
    public:
    void PushBack(int val);
    void Print(void);
    void Delete(int nodeNumber);

    private:
    Node_t* head;
};