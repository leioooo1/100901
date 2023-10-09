#pragma once
class Task
{
public:
	Task();
	~Task();

	virtual void read();
	virtual void write();

protected:
	char path[64];
};

