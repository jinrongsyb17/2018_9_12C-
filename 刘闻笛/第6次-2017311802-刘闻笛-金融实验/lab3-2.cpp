// lab3-2.cpp : �������̨Ӧ�ó������ڵ㡣
#include"stdafx.h"
#include "client.h"
#include <iostream>

using namespace std;

int main()
{
	CLIENT client1(992231,23);
	CLIENT client2(112233,33);
	CLIENT client3(990022,19);
	cout << client1.getid() << endl;
	cout << client2.getage() << endl;
	cout << client2.gettotal() << endl;
	cout << client3.gettotal() << endl;
	client3.show();
	return 0;
}
