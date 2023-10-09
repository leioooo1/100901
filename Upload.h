#pragma once
#include "Task.h"
class Upload :
	public Task
{
public:
	Upload();
	~Upload();

	virtual void read();
	virtual void write();

private:
	char name[16];
};

