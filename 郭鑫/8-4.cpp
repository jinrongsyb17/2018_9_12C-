#include "pch.h"
#include <iostream>
using namespace std;

class Counter {
public:
	Counter();
	Counter(int a);
	~Counter() {}
	int getvalue()const {
		return value;
	}
	void setvalue(int x) { value = x; }
	Counter operator+(const Counter&);
private:
	int value;
};
Counter::Counter(int a):
	value(a){}
Counter::Counter():
	value(0){}
Counter Counter::operator+(const Counter &r) {
	return Counter(value + r.getvalue());
}
int main() {
	Counter varone(2), vartwo(4), varthree;
	varthree = varone + vartwo;
	cout << "varthree: " << varthree.getvalue() << endl;
}