#include <iostream>
#include <iomanip>
#include "array.h"
using namespace std;

int main()[
	int n;
	double average, total = 0;
	cout << "����ѧ������" << endl;
	cin >> n;
	array<float>
		score(n);
	for (int i = 0; i < n; i++) {
		cout << "����" << i + 1 << "��ѧ���ɼ�" << endl;
		cin >> score[i];
		total += score[i];

	}
	average = total / n;
	cout << "ƽ���ɼ�Ϊ" << setprecision(4) << average << endl;
	return 0;

]
