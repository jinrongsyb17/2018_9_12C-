// ʵ������2��.cpp : �������̨Ӧ�ó������ڵ㡣
//client

#include "stdafx.h"
#include<iostream>
#include"client.h"
using namespace std;

int CLIENT::count = 1;
void CLIENT::showCount() {
	cout << "Object count=" << count << endl;
}
