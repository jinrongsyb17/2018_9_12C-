#include <iostream>
#include <fstream>
using namespace std;

class dog {
public:
	dog(int weight, int year) :itsweight(weight), itsyear(year) {};
	~dog() {};
	int getweight()const { return itsweight; };
	int getyear()const { return itsyear; };
	void setweight(int weight) {
		itsweight = weight;
	}
	void setyear(int year) {
		itsyear = year;
	}
private:
	int itsweight;
	int itsyear;
};


int main() {
	char filename[70];
	cout << "�������ļ���" << endl;
	cin >> filename;
	ofstream fout(filename);
	if (!fout) {
		cout << "���ܴ�" << filename;
		return (1);
	}


	dog dog1(5, 10);
	fout.write((char*)&dog1, sizeof dog1);
	fout.close();

	ifstream fin(filename);
	if (!fin) {
		cout << "���ܴ�" << filename;
		return (1);
	}
	

	dog dog2(2, 2);
	cout << "dog2��������" << dog2.getweight() << endl;
	cout << "dog2��������" << dog2.getyear() << endl;

	fin.read((char*)&dog2, sizeof dog2);
	cout << "dog2��������" << dog2.getweight() << endl;
	cout << "dog2��������" << dog2.getyear() << endl;
	fin.close();
	return 0;

}