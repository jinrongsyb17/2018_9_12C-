// ConsoleApplication3.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
using namespace std;
class BaseClass {
public:
	void fn1();
	void fn2();
};
void BaseClass::fn1() {
	cout << "���û��ຯ��fn1()" << endl;
}
void BaseClass::fn2() {
	cout << "���û��ຯ��fn2()" << endl;
}
class DerivedClass :public BaseClass {
public:
	void fn1();
	void fn2();
};
void DerivedClass::fn1() {
	cout << "���������ຯ��fn1()" << endl;
}
void DerivedClass::fn2() {
	cout << "���������ຯ��fn2()" << endl;
}
int main()
{
	DerivedClass aDerivedClass;
	DerivedClass *pDerivedClass = &aDerivedClass;
	BaseClass *pBaseclass = &aDerivedClass;
	aDerivedClass.fn1();
	aDerivedClass.fn2();
	pBaseclass->fn1();
	pBaseclass->fn2();
	pDerivedClass->fn1();
	pDerivedClass->fn2();
    return 0;
}

