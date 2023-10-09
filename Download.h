#pragma once
#include "Task.h"
class Download :
	public Task
{
public:
	Download();
	~Download();

	virtual void read();
	virtual void write();

private:
	int cnt;
};

