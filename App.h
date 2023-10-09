#pragma once
#include "Task.h"

class App
{
public:
	App();
	~App();

	void run();
private:
	void add();
	void display();
	Task* createNewTask(int n) const;
private:
	Task* taskList[1024];
	int   pos;
};

