#include"pch.h"
#include<fstream>
#include<iostream>
using namespace std;

class Dog {
public:
	Dog(int weight, long days):
		itsweight(weight),itsnumberdayalive(days){}
	~Dog(){}
	int getweight()const {
		return itsweight;
	}
	void setweight(int weight) {
		itsweight = weight;
	}
	long getdaysalive()const {
		return itsnumberdayalive;
	}
	void setdaysalive(long days) {
		itsnumberdayalive = days;
	}
private:
	int itsweight;
	long itsnumberdayalive;
};

int main() {
	char filename[80];
	cout << "Please enter the file name:";
	cin >> filename;
	ofstream fout(filename);
	if (!fout) {
		cout << "Unable to open " << filename << "for writing.\n";
		return (1);
	}

Dog dog1(5, 10);
fout.write((char*)&dog1, sizeof dog1)
fout.close();
ifstream fin(filename);
if (!fin) {
	cout << "unable to open" << filename << "for reading.\n";
	return (1);
}
Dog dog2(2, 2);
cout << "dog2 weight:" << dog2.getweight() << endl;
cout << "dog2 days:" << dog2.getdaysalive() << endl;
fin.read((char *)&dog2, sizeof dog2);

cout << "dog2 weight: " << dog2.getweight() << endl;
cout << "dog2 days: " << dog2.getdaysalive() << endl;
fin.close();
return 0;}