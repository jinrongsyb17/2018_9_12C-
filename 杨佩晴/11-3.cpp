// 11-3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<fstream>
using namespace std;


void main() {
	ifstream file1("test.txt");
	file1 << "已成功写入文件！";
	file1.close();
}