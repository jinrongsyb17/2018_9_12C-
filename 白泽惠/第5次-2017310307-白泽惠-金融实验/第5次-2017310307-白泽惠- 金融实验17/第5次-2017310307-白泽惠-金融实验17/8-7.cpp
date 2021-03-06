// ConsoleApplication103.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;


class Point
{
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	~Point() {}
public:
	void showPosition() { cout << "(" << x << ", " << y << ")" << endl; }
public:
	Point operator ++();
	Point operator --();
	Point operator ++(int);
	Point operator --(int);
private:
	int x;
	int y;
};

Point Point::operator ++()
{
	Point po;
	po.x = x + 1;
	po.y = y + 1;

	x += 1;
	y += 1;

	return po;
}

Point Point::operator --()
{
	Point po;
	po.x = x - 1;
	po.y = y - 1;

	x -= 1;
	y -= 1;

	return po;
}

Point Point::operator ++(int)
{
	Point po;
	po.x = x;
	po.y = y;

	x += 1;
	y += 1;

	return po;
}

Point Point::operator --(int)
{
	Point po;
	po.x = x;
	po.y = y;

	x -= 1;
	y -= 1;

	return po;
}

int main()
{
	Point po(0, 0);
	Point po1(2, 3);
	Point po2(1, 4);
	cout << "Position po: "; po.showPosition();
	cout << "Position po1: "; po1.showPosition();
	cout << "Position po2: "; po2.showPosition();
	cout << "_______________" << endl;

	po = po1++;
	cout << "Pos ++: po = "; po.showPosition();
	cout << "Pos ++: po1 = "; po1.showPosition();
	po = po2--;
	cout << "Pos --: po = "; po.showPosition();
	cout << "Pos --: po2 = "; po2.showPosition();
	cout << "_______________" << endl;

	po = ++po1;
	cout << "Pre ++: po = "; po.showPosition();
	cout << "Pre ++: po1 = "; po1.showPosition();
	po = --po2;
	cout << "Pre --: po = "; po.showPosition();
	cout << "Pre --: po2 = "; po2.showPosition();

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
