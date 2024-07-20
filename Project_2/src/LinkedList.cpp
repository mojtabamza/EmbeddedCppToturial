#include "LinkedList.hpp"

void LinkedList_t::PushBack(int val)
{
    Node_t* newNode = new Node_t(val);
    if ( head == nullptr ) {
        head = newNode;
        return;
    }
    Node_t* tmp = head;
    while ( tmp->next != nullptr ) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void LinkedList_t::Print(void)
{
    Node_t* tmp = head;
    while ( tmp != nullptr ) {
        cout << tmp->value << " <- ";
        tmp = tmp->next;
    }
    cout << endl;
}

void LinkedList_t::Delete(int nodeNumber)
{

}

int LinkedList_t::Back(void)
{
    return 0;
}
