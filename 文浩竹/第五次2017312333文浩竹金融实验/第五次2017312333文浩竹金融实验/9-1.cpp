#include<iostream>
#include "Array.h"
using namespace std;

int main() {
	cout << "������༶��ѧ������n" << endl;
	int num;
	int count = 0;
	cin >> num;
	Array<double>a(10);
	cout << "���������ǵĿ��Գɼ�" << endl;
	if (count <= num) {
		cin >> a[count++];
	}
}