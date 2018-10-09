// 3-9：质数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int judge(int x) {
	int y;
	while (x < 2) {
		cout << "请输入大于等于2的数字！";
		break;
	}

	while (x >= 2) {
		for (int i = 2; i < x; i++) {
			y = x % i;
			if (y == 0) {
				cout << "这不是质数！";
				break;
			}
			if (i == x - 1) {
				cout << "这是质数！";
				break;
			}
		}
		break;
	}
	return 0;
}

int main() {
	int x;
	cout << "请输入一个数，我将帮你判断它是不是质数:";
	cin >> x;
	judge(x);
	return 0;
}

