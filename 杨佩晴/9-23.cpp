// 9-23.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

template<unsigned M,unsigned N>
class Permutation {
public:
	enum { VALUE = Permutation<M, N - 1>::VALUE*(M - N + 1) };//递归。
};

template<unsigned M>
class Permutation<M, 1> {
public:
	enum { VALUE = M};//Value最开始的地方，初始值为1
};

int main() {
	cout << Permutation<10, 2>::VALUE <<endl;
	return 0;
}
