// ʵ��һ-.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU {
public:
	CPU(CPU_Rank rank, int frequency, float voltage);
		void run();
		void stop();
		~CPU() { cout << "������������" << endl; };
private:
	CPU_Rank rank;
	int frequency;
	float voltage;

};
CPU::CPU(CPU_Rank rank, int frequency, float voltage)
{
	cout << "����CPU�Ĺ��캯��" << endl;
	cout << "rank:" << rank << endl;
	cout << "frequency:" << frequency << "MHz"<<endl;
	cout << "voltage:" << voltage << "V"<<endl;

}
void CPU::run() { cout << "run����" << endl; }
void CPU::stop() { cout << "stop����" << endl; }

int main()
{
	CPU cpu(P5, 50, 2.5);
	cpu.run();
	cpu.stop();
	
    return 0;
}

