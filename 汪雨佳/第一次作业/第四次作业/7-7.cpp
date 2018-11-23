// 7-7.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class Base
{
public:
	Base();
	~Base() {};
};
Base::Base()
{
	cout << "调用基类构造函数" << endl;
}

class Derived:public Base
{
public:
	Derived();
	~Derived() {};
};

Derived::Derived()
{
	cout << "调用派生类构造函数" << endl;
}

int main()
{
	Derived a;
	return 0;
}
