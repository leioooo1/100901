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
	cout << "�������������񣬸�ʽ: ����·�� ���ش���\n";
	cin >> path >> cnt;
}

void Download::write()
{
	cout << "��������: �����ļ�      ����·����"
		<< path << "    ���ش���:"
		<< cnt << "��" << endl;
}
