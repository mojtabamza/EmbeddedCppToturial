#include <iostream>
#include <vector>
#include "TaskManager.hpp"

using std::cout;
using std::endl;
using std::vector;

void TaskA(void) {
    cout << "Task A!" << endl;
}

void TaskB(void) {
    cout << "Task B!" << endl;
}

int main(void) {
    cout << "TASK MANAGER PROJECT" << endl;

    TaskManager_t::GetInstance()->AddTask(TaskA, 5);
    TaskManager_t::GetInstance()->AddTask(TaskB, 8);

    while(1) {
        TaskManager_t::GetInstance()->SysTickHandler();
    }
    return 0;
}