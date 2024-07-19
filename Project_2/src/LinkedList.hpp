
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
    void push_back(int val);
    void print(void);

    private:
    Node_t* head;
};