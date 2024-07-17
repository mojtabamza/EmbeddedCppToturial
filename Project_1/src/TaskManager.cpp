#include "TaskManager.hpp"

TaskManager_t* TaskManager_t::GetInstance(void) {
    static TaskManager_t* instance  = nullptr;
    if(instance == nullptr) {
        instance = new TaskManager_t();
    }
    return instance;
}

TaskManager_t::TaskManager_t() {
    this->nowSysTick = 0;
}

void TaskManager_t::AddTask(void(*task)(void), int interval) {
    Task_t* newTask = new Task_t();
    newTask->interval = interval;
    newTask->task = task;
    newTask->exeTime = newTask->interval + this->nowSysTick;
    this->tasks.push_back(newTask);
}

void TaskManager_t::SystickIsr(void) {
    this->nowSysTick++;
    cout << "Tick : " << this->nowSysTick << endl;
    for(auto task : tasks) {
        if(task->exeTime == this->nowSysTick) {
            task->task();
            task->exeTime = task->interval + this->nowSysTick;
        }
    }
}

void TaskManager_t::SysTickHandler(void) {
    static int timer = 0;
    if(++timer >= 900000000) {
        timer = 0;
        this->SystickIsr();
    }
}