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
	cout << "�������ϴ����񣬸�ʽ: ����·�� �ϴ���\n";
	cin >> path >> name;
}

void Upload::write()
{
	cout << "��������: �ϴ��ļ�      ����·����"
		<< path << "    �ϴ���:" << name << endl;
}
