// 8-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Mammal {
public:
	Mammal() {
		cout << "Mammal constructor...\n";

	}
	virtual ~Mammal() {
		cout << "Mammal destructor...\n";
	}
	virtual void speak()const {
		cout << "Mammal speak!\n";
	}
};
class dog :public Mammal {
public:
	dog() {
		cout << "dog constructor...\n";
	}
	~dog() {
		cout << "dog destructor...\n";
	}
	void speak()const {
		cout << "woof!\n";
	}
};
int main() {
	Mammal*pdog = new dog;
	pdog->speak();
	delete pdog;
	return 0;
}