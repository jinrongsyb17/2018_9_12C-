#include<iostream>
#include<fstream>
using namespace std;
class dog {
public:
	dog() {};
	dog(double wei, int age) :weight(wei), age(age) {	}
	void show() {
		cout << "this dog is " << age << endl;
		cout << "this dog weighs " << weight << endl;
	}
private:
	double weight;
	int age;
};

int main() {
	dog wawa(5, 10);

	char filename[100];
	cout << "Please enter the file name:";
	cin >> filename;
	cout << "wawa:" << endl;
	wawa.show();
	ofstream fileout(filename);
	if (!fileout) {
		cout << "no open " << filename << endl;
	}
	fileout.write((char*)&wawa, sizeof wawa);
	fileout.close();
	dog wa(7, 12);
	cout << "wa:" << endl;
	wa.show();
	ifstream filein(filename); 
	if (!filein) {
		cout << "no open " << filename << endl;
	}
	filein.read((char*)&wa, sizeof wa);
	cout << "wa:" << endl;
	wa.show();
	filein.close();
	system("pause");
	return 0;