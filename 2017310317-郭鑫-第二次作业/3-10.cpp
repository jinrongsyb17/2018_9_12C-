#include "pch.h"
#include <iostream>
using namespace std;

int gys(int a, int b) {
	int z;
	while (a%b != 0) {
		z = a % b;
		a = b;
		b = z;
	}
	return z;
}

int gbs(int a, int b, int z) {
	int t;
	t = a * b / z;
	return t;
}

int main() {
	int a, b, z, t;
	cout << "Enter the number: ";
	cin >> a >> b;
	z=gys(a, b);
	cout << z << "是最大公因数。";
	t=gbs(a, b, z);
	cout << t << "是最小公因数。";
	return 0;
}