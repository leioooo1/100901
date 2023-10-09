#include "stdafx.h"
#include "FileList.h"
#include <iostream>
using namespace std;

FileList::FileList()
{
}


FileList::~FileList()
{
}

void FileList::read()
{
	cout << "请输入文件列表任务，格式: 路径\n";
	cin >> path;
}

void FileList::write()
{
	cout << "任务类型: 文件列表      路径:" << path << endl;
}
