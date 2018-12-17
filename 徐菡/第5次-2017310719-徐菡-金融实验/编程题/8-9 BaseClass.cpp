// 8-9 BaseClass.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


class BaseClass{
public:
	BaseClass(){};
	virtual ~BaseClass(){ 
		cout << "destructing BaseClass" << endl; 
	};
};

class DerivedClass :public BaseClass{
public:
	DerivedClass(){};
	~DerivedClass(){
		cout << "destructing DerivedClass" << endl;
	};
	
};

void test(BaseClass*x)
{
	delete x;
}

	int main(){
		BaseClass *a = new DerivedClass;
		test(a);
		return 0;
	}