// 8-5 ����Dog.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Mammal{
public:
	virtual void speak ()const=0;
};

class Dog:public Mammal{
public:
	void speak() const;
};

void Dog::speak() const{
	cout << "Dog::speak" << " " << "ao" << endl;
}

	int main(){
		Dog doggy;
		doggy.speak();
		return 0;
	}

