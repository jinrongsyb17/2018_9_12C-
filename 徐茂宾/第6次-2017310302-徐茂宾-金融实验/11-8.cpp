// 11-8.cpp 

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "请输入一个十进制的整数：" ;
	cin >> a;
	cout <<a<< "的十进制表示为：" << dec<<a<<endl;
	cout <<a<< "的八进制表示为：" <<oct<<a << endl;
	cout <<a<< "的十六进制表示为：" << hex<<a << endl;
	return 0;
}

