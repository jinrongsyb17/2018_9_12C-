// 8-10 Point����Ԫ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point {	
public:	
	Point(double x1 = 0.0, double y1 = 0.0) : x(x1), y(y1) { }	
	friend Point operator + (const Point &a, const Point &b);	
	void display(){
		cout << "(" << x << "," << y << ")" << endl;
	}
private:	
	double x;	
	double y;	
};

Point operator + (const Point &a, const Point &b) {	//�������������ʵ��
	return Point(a.x + b.x,a.y +b.y);
}

int main() {	
	Point a(1,2), b(3,4), c;	
	cout << "a = ";
	a.display();
	cout << "b = ";
	b.display();
	c = a+b;	
	cout << "c = a+b = ";
	c.display();
	return 0;
}