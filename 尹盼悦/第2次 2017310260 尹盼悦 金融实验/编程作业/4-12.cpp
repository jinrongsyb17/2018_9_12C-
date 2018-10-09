// ConsoleApplication46.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
class datatype
{
public:
	datatype(int a, float b, char c);
	void geta();
	void getb();
	char getchar();
private:
	int m_ia;
	float m_fb;
	char m_charc;
};
datatype::datatype(int a, float b, char c)
{
	m_ia = a;
	m_fb = b;
	m_charc = c;
}
void datatype::geta() { cout << m_ia * 2 << endl; }
void datatype::getb() { cout << m_fb * 2 << endl; }
char datatype::getchar() { return m_charc - 32; }

int main()
{
	datatype p(5, 2.5, 'a');
	p.geta();
	p.getb();
	p.getchar();
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
