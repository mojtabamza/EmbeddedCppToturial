#pragma once

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

struct Task_t
{
    int interval;
    void(*task)(void);
    int exeTime;
};

class TaskManager_t {
    public:
    static TaskManager_t* GetInstance(void);
    void AddTask(void(*task)(void), int interval);
    void SysTickHandler(void);
    void SystickIsr(void);
    private:
    TaskManager_t();
    vector<Task_t*> tasks;
    int nowSysTick;

};