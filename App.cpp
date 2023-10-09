#include "stdafx.h"
#include "App.h"
#include <iostream>
#include "Upload.h"
#include "Download.h"
#include "FileList.h"
using namespace std;

App::App()
	: pos(0)
{

}


App::~App()
{

}

void App::run()
{
	while (true)
	{
		cout << "1���������      2����ʾ��������    3���˳�ϵͳ\n:";
		int n;
		cin >> n;
		if (n == 1) add();
		if (n == 2) display();
		if (n == 3) break; 
	}
}

void App::add()
{
	cout << "1���ļ��б�      2���ϴ��ļ�    3�������ļ�\n:";
	int n;
	cin >> n;
	Task *pTask = createNewTask(n);
	if (pTask) {
		pTask->read();
		taskList[pos++] = pTask;
	}
}

void App::display()
{
	for (int i = 0; i < pos; ++i) {
		taskList[i]->write();
	}
}

Task * App::createNewTask(int n) const
{
	if (n == 1) return new FileList;
	if (n == 2) return new Upload;
	if (n == 3) return new Download;
	return nullptr;
}
