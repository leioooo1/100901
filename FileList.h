#pragma once
#include "Task.h"

class FileList : public Task
{
public:
	FileList();
	~FileList();

	virtual void read();
	virtual void write();
};

