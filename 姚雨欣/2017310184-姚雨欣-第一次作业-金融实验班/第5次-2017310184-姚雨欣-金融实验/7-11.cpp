#include <iostream>
using namespace std;
class baseclass {
public:
	void fun1();
	void fun2();
};

void baseclass::fun1() {
	cout << "���ڵ��û����fun1����" << endl;
}

void baseclass::fun2() {
	cout << "���ڵ��û����fun2����" << endl;
}

class derivedclass :public baseclass {
public:
	void fun1();
	void fun2();
};

void derivedclass::fun1() {
	cout << "���ڵ����������fun1" << endl;
}

void derivedclass::fun2() {
	cout << "���ڵ����������fun2" << endl;
}

int main() {
	derivedclass a;
	derivedclass *p1 = &a;
	baseclass *p2 = &a;
	a.fun1();
	a.fun2();
	p1->fun1();
	p1->fun2();
	p2->fun1();
	p2->fun2();
	return 0;
	system("pause");
}