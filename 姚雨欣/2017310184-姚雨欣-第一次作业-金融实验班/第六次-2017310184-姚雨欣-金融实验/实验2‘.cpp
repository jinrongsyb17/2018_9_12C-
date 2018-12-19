#include <iostream>
using namespace std;

class computer {
public:
	computer(RAM xram, CDROM xcdrom, CPU xcpu);
	computer(computer&m);
	void run() {};
	void stop() {};
private:
	RAM ram;
	CDROM cdrom;
	CPU cpu;

};

computer::computer(RAM xram, CDROM xcdrom, CPU xcpu):RAM(xram),CDROM(cdrom),CPU(xcpu) {
	ram = xram;
	cdrom = xcdrom;
	cpu = xcpu;
	cout << "�����ڵ��ù��캯��" << endl;
}

void computer::run() {
	cout << "�����ڵ���run����" << endl;
}

void computer::stop() {
	cout << "�����ڵ���stop����" << endl;
}

class RAM {
public:
	RAM(int a) {};
	~RAM() {};
private:
	int A;

};

class CDROM {
public:
	CDROM(int b) {};
	~CDROM() {};
private:
	int B;

};

class CPU {
	CPU(int c) {};
	~CPU() {};
private:
	int C;
};

int main() {
	computer a(20, 10, 19);
	a.run();
	a.stop();
	return 0;
}