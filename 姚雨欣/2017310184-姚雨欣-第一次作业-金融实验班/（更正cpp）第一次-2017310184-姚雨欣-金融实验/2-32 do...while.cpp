#include <iostream>
using namespace std;
int main() {
	int i = 20, m;
	do {
		cout << "�������ְ�" << endl;
		cin >> m;
		if (i > m)
			cout << "���������̫С��" << endl;
		else if (i < m)
			cout << "���������̫����" << endl;
		else
			cout << "��¶���" << endl;

	} while (i != m);
	system("pause");
	return 0;

}