// 8-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class BaseClass {
public:
	virtual~BaseClass() {

		cout << "~BaseClass()" << endl;
	}
};
class DerivedClass :public BaseClass {
public:
	~DerivedClass() {
		cout << "~DerivedClass()" << endl;
	}
};
int main() {
	BaseClass*bp = new DerivedClass;
	delete bp;
	return 0;
}