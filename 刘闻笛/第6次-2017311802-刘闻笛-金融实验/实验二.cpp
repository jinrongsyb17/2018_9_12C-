// ʵ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU() { cout << "����CPUĬ�Ϲ��캯��" << endl; }
	CPU(CPU_Rank rank, int frequency, float voltage);
	void run();
	void stop();
	~CPU() { cout << "����CPU��������" << endl; };
private:
	CPU_Rank rank;
	int frequency;
	float voltage;

};
CPU::CPU(CPU_Rank rank, int frequency, float voltage)
{
	cout << "����CPU�Ĺ��캯��" << endl;
	cout << "rank:" << rank << endl;
	cout << "frequency:" << frequency << "MHz" << endl;
	cout << "voltage:" << voltage << "V" << endl;

}
void CPU::run() { cout << "run����" << endl; }
void CPU::stop() { cout << "stop����" << endl; }

class RAM {
public:
	RAM() { cout << "����RAM���캯��" << endl; }
	~RAM() { cout << "����RAM��������" << endl; }
};
class CDROM {
public:
	CDROM() { cout << "����CDROM���캯��" << endl; }
	~CDROM() { cout << "����CDROM��������" << endl; }
};
class COMPUTER {
public:
	COMPUTER(CPU cpu, RAM ram, CDROM cdrom);
	void run() { cout << "COMPUTER::run" << endl; }
	void stop() { cout << "COMPUTER::stop" << endl; }
	~COMPUTER() { cout << "����COMPUTER��������" << endl; }
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
};
COMPUTER::COMPUTER(CPU cpu, RAM ram, CDROM cdrom) :cpu(), ram(), cdrom() {
	 cout << "����COMPUTER���캯��" << endl; 
}
int main()
{
	CPU cpu(P5,50,2.5);
	RAM ram;
	CDROM cdrom;

	cout << "����computer����" << endl;
	COMPUTER computer(cpu,ram,cdrom);
	computer.run();
	computer.stop();
    return 0;
}

