#include <iostream>
#include <cmath>
using namespace std;
 
int fun1(int i, int j);

int main() {
	int i, j, x, y;
	cout << "����һ������" << endl;
	cin >> i;
	cout << "����һ������" << endl;
	cin >> j;


	x = fun1(i, j);
	y = i*j / x;
	cout << i << "��" << j << "�Ĺ�Լ����" <<x<< endl;
	cout << i << "��" << j << "�Ĺ�������" <<y<< endl;
	system("pause");
	return 0;
}

int fun1(int i, int j) {
	int t;
	if (i < j) {
		t = i;
		i = j;
		j = t;

	}
	while (j != 0) {
		t = i%j;
		i = j;
		j = t;
	}
	return i;
}