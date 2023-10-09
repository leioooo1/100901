#include "stdafx.h"
#include "Download.h"
#include <iostream>
using namespace std;

Download::Download()
{
}


Download::~Download()
{
}

void Download::read()
{
	cout << "请输入下载任务，格式: 下载路径 下载次数\n";
	cin >> path >> cnt;
}

void Download::write()
{
	cout << "任务类型: 下载文件      下载路径："
		<< path << "    下载次数:"
		<< cnt << "次" << endl;
}
