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
	cout << "�������ļ��б����񣬸�ʽ: ·��\n";
	cin >> path;
}

void FileList::write()
{
	cout << "��������: �ļ��б�      ·��:" << path << endl;
}
