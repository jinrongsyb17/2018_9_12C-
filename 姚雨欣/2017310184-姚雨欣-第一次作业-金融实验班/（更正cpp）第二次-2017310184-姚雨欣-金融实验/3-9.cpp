#include <iostream>
#include <cmath>
using namespace std;
int y(int i);
int main() {
	int i;
	cout << "����һ������" << endl;
	cin >> i;
	if (y(i))
		cout << "������" << endl;
	else
		cout << "��������" << endl;
	system("pause");
	return 0;
	
}

int y(int i) {
	int j, k, m;
	m = 1;
	k = sqrt(i);
	for (j = 2; j <= k; j++) {
		if (i%j == 0) {
			m = 0;
			break;
		}
	}
	return m;
}