// ConsoleApplication5.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "���ù��캯��" << endl;
	};
	~CPU() { cout << "������������" << endl; };
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
int main() {
	CPU cpu(P4, 2.8, 300);
	cpu.run();
	cpu.stop();
	return 0;
}