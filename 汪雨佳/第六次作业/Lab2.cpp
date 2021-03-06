// Lab2.cpp
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
	float run() { return voltage; }
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

class RAM
{
public:
	RAM() { cout << "constructing RAM" << endl; }
	~RAM() { cout << "destructing RAM" << endl; }
};

class CDROM
{
public:
	CDROM() { cout << "constructing CDROM" << endl; }
	~CDROM() { cout << "destructing CDROM" << endl; }
};

class Computer
{
public:
	Computer() { cout << "constructing Computer" << endl; }
	~Computer() { cout << "destructing Computer" << endl; }
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
};

int main()
{
	Computer c;
	return 0;
}
