#include <iostream>
using namespace std;

class base {
public:
	virtual~base() {
		cout << "�����˻������������" << endl;
	}
};

class derived :public base {
public:
	~derived() {
		cout << "���������������������" << endl;
	}
};

int main() {
	base *p = new derived;
	delete p;
	return 0;
}