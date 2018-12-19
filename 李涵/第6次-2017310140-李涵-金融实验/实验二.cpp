// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU(CPU_Rank r, float vol, int fre)
	{
		rank = r;
		voltage = vol;
		frequency = fre;
		cout << "����CPU���캯��" << endl;
	};
	~CPU() { cout << "����CPU��������" << endl; };
	CPU_Rank getrank() const { return rank; };
	float getvol() const { return voltage; };
	int getfre() const { return frequency; };
	void setrank(CPU_Rank r) { rank = r; };
	void setvol(float vol) { voltage = vol; };
	void setfre(int fre) { frequency = fre; };
	void run() { cout << "����CPU" << endl; };
	void stop() { cout << "ֹͣCPU" << endl; };
private:
	CPU_Rank rank;
	float voltage;
	int frequency;
};
class RAM {
public:
	RAM(int x) {
		cout << "����RAM���캯��" << endl;
	};
	~RAM() { cout << "����RAM��������" << endl; };
private:
	int x;
};
class CDROM {
public:
	CDROM(int y) {
		cout << "����CDROM���캯��" << endl;
	};
	~CDROM() { cout << "����CDROM��������" << endl; };
private:
	int y;
};
class Computer {
public:
	Computer(CPU_Rank r,float v,int f,int x,char y):cpu(r,v,f),ram(x),cdrom(y)
	{
		cout << "����Computer���캯��" << endl;
	};
	~Computer() { cout << "����Computer����������" << endl; };
	void run() { cout << "����Computer" << endl; };
	void stop() { cout << "ֹͣComputer" << endl; };
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
};
int main() {
	Computer computer(P3, 2.8, 300, 4, 'G');
	computer.run();
	computer.stop();
}