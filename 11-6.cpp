// 11-6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

class dog
{
public:
	int weight;
	int age;
	dog()
	{
	}
	dog(int weight1, int age1)
	{
		weight = weight1;
		age = age1;
	}
	~dog()
	{
	}
};
int main()
{
	dog dog1(5, 10);
	dog dog2;
	ofstream fout;
	ifstream fint;
	fout.open("out.txt");
	fout << dog1.weight << "\n" << dog1.age << endl;
	fint.open("out.txt");
	fint >> dog2.weight >> dog2.age;
	cout << dog2.weight << dog2.age << endl;
	fout.close();
	//二进制
	ofstream fdata("file.dat", ios::binary);
	fdata.write((char*)(&dog1), sizeof(dog1));
	ifstream fint1("file.dat", ios::binary);
	fint1.read((char*)(&dog2), sizeof(dog2));
	cout << dog2.age << dog2.weight << endl;
	return 0;
}
    