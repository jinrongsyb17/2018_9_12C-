// ConsoleApplication15.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <fstream>
using namespace std;
int main()
{
	ofstream file1("test1.txt");
	file1 << "�ѳɹ�д���ļ���";
	file1.close();
	return 0;
}