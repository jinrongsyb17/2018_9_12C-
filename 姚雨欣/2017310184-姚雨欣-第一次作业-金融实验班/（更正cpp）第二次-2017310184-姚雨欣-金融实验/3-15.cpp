#include <iostream>
using namespace std;
int getpoint(int x, int y);
double getpoint(double x, int y);  //x��y���βΣ�ʵ���Ǻ����number��power

int main() {
	int inumber, power;   //number��power��ʵ�Σ�power�Ǵη�
	double dnumber;
	int ianswer;
	double danswer;
	cout << "������������" << endl;
	cin >> inumber;
	cout << "����˫��������" << endl;
	cin >> dnumber;
	cout << "���ٴη�" << endl;
	cin >> power;
	ianswer = getpoint(inumber, power);
	danswer = getpoint(dnumber, power);
	cout << inumber << "��" << power << "�η���" << ianswer << endl;
	cout << dnumber << "��" << power << "�η���" << danswer << endl;
	system("pause");
	return 0;

}



int getpoint(int x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 0;    //�������ݲ����и����η�
	else
		return (x*getpoint(x, y - 1));     //�ݹ���м���

}

double getpoint(double x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 1 / getpoint(x, -y);
	else
		return (x*getpoint(x, y - 1));


}