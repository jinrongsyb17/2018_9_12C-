#include<iostream>
#include<iomanip>
#include "array.h"
using namespace std;

int main() {
	int n;
	double average, total = 0;
	cout << "������ѧ��������";
	cin >> n;
	Array<float> socre(n);
	for (int i = 0; i < n; i++) {
		cout << "�������" << i + 1 << "��ѧ���Ŀγ̳ɼ���";
		cin >> score[i];
		total += score[i];
	}
	averge = total / n;
	cout << "ƽ���ɼ�Ϊ" << setprecision(4) << average << endl;
	return 0;
}