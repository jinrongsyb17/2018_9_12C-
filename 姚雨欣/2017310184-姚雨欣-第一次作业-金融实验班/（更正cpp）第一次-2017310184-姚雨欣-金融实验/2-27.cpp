#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "�㿼�˶��ٷ�(0-100)" << endl;
	cin >> n;
	if (n > 100 || n < 0)
		cout << "��ķ������ԣ�Ҫ��0��100֮��" << endl;
	else if (n >= 0 && n < 60)
		cout << "��ĵȼ�Ϊ��" << endl;
	else if (n >= 60 && n < 80)
		cout << "��ĵȼ�Ϊ��" << endl;
	else if (n >= 80 && n < 90)
		cout << "��ĵȼ�Ϊ��" << endl;
	else if (n >= 90 && n < 100)
		cout << "��ĵȼ�Ϊ��" << endl;
	system("pause");
	return 0;
}