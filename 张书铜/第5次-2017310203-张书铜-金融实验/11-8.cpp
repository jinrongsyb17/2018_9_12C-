// ConsoleApplication19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "请输入一个十进制整数：";
	cin >> n;
	cout << "这个数的十进制形式为：" << dec << n << endl;
	cout << "这个数的八进制形式为：" << oct << n << endl;
	cout << "这个数的十六进制形式为：" << hex << n << endl;

	return 0;
}