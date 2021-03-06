#include "pch.h"
#include <iostream>
using namespace std;

class BaseClass {
public:
	void fn1() {
		cout << "BaseClass::fn1" << endl;}
	void fn2() { cout << "BaseClass::fn2" << endl; }
};
class Derived :public BaseClass {
public:
	void fn1() { cout << "Derived::fn1" << endl; }
	void fn2() { cout << "Derived::fn2" << endl; }
};
int main() {
	Derived a;
	a.fn1();
	a.fn2();
	BaseClass *p=&a;
	p->fn1();
	p->fn2();
	Derived *sp=&a;
	sp->fn1();
	sp->fn2();
	return 0;
}