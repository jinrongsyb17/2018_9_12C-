#include <iostream>
#include <cstdio>
using namespace std;
int count(char * str) {
	int i, num = 0;
	for (i = 1; str[i]; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			num++;

	}
	return num;
 }

int main() {
	char text[1000];
	cout << "����һ�仰" << endl;
	gets(text);
	cout << "��" << count(text) << "����ĸ" << endl;
	system("pause");
}