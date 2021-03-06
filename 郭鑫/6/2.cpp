#include "pch.h"
#include <iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU {
private:
	CPU_Rank rank;
	int frequency;
	double voltage;
public:
	CPU() {};
	CPU(CPU_Rank r, int f, double v) {
		rank = r;
		frequency = f;
		voltage = v;
		cout << "构造了CPU！" << endl;
	}
	CPU(CPU &CPU1) { cout << "复制构造了一个CPU！" << endl; }
	~CPU() { cout << "析构了一个CPU!" << endl; }
};
class Ram {
private:
	int ram;
public:
	Ram() {};
	Ram(int m) {
		ram = m;
		cout << "构造了Ram！" << endl;
	}
	Ram(Ram &Ram) { cout << "复制构造了一个Ram！" << endl; }
	~Ram() { cout << "析构了一个Ram！" << endl; }
};
class CDROM {
private:
	int cdrom;
public:
	CDROM() {};
	CDROM(int c) {
		cdrom = c;
		cout << "构造了一个CDROM!" << endl;
	}
	CDROM(CDROM &CDROM) { cout << "复制构造了一个CDROM！" << endl; }
	~CDROM() { cout << "析构了一个CDROM！" << endl; }
};
class Computer {
private:
	CPU A;
	Ram B;
	CDROM C;
public:
	Computer(CPU_Rank r, int f, double v, int m, int c) { cout << "调用Computer！" << endl; }
	void run() { cout << "Computer 开始运行！" << endl; };
	void stop() { cout << "Computer停止运行！" << endl; };
	~Computer() { cout << "析构了一个Computer！" << endl; }
};
int main() {
	Computer computer(P1, 20, 220, 6, 7);
	computer.run();
	computer.stop();
	return 0;
}