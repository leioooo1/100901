#include "stdafx.h"
#include "Upload.h"
#include <iostream>
using namespace std;

Upload::Upload()
{
}


Upload::~Upload()
{
}

void Upload::read()
{
	cout << "请输入上传任务，格式: 保存路径 上传者\n";
	cin >> path >> name;
}

void Upload::write()
{
	cout << "任务类型: 上传文件      保存路径："
		<< path << "    上传者:" << name << endl;
}
