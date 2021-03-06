// Lab1.cpp
#include "pch.h"
#include <iostream>
using namespace std;

enum CPU_Rank
{
	P1 = 1, P2, P3, P4, P5, P6, P7
};

class CPU
{
public:
	CPU();
	CPU(CPU_Rank r, int f, float v);
	~CPU();
	float run() { return voltage ; }
	int stop() { return rank ; }
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
};

CPU::CPU()
{
	cout << "construcing CPU" << endl;
}

CPU::CPU(CPU_Rank r, int f, float v)
{
	rank = r;
	frequency = f;
	voltage = v;
}

CPU::~CPU()
{
	cout << "destructing CPU" << endl;
}

int main()
{
	CPU c;
	CPU a(P3, 50, 220);
	CPU b = a;
	cout << a.run() << endl;
	cout << b.stop() << endl;
	return 0;
}
