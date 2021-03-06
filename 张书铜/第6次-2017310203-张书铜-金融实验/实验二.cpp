// ConsoleApplication29.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU(CPU_Rank r, int f, float v) {
		rank = r;
		frequency = f;
		voltage = v;
		cout << "调用CPU的构造函数" << endl;
	};
	CPU() {
		cout << "调用CPU的默认构造函数" << endl;
	}
	~CPU() {
		cout << "调用CPU的析构函数" << endl;
	}
	void run() {
		cout << "CPU运行" << endl;
	};
	void stop() {
		cout << "CPU停止" << endl;
	};
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
};

class RAM {
public:
	RAM() {
		cout << "调用RAM的构造函数" << endl;
	}
	~RAM() {
		cout << "调用RAM的析构函数" << endl;
	}
};

class CDROM {
public:
	CDROM() {
		cout << "调用CDROM的构造函数" << endl;
	}
	~CDROM() {
		cout << "调用CDROM的析构函数" << endl;
	}
};

class Computer {
public:
	Computer() {
		cout << "调用Computer构造函数" << endl;
	}
	~Computer() {
		cout << "调用Computer析构函数" << endl;
	}
	void run() {
		cout << "computer运行" << endl;
	}
	void stop() {
		cout << "computer停止" << endl;
	}
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
};

int main()
{
	Computer com;
	com.run();
	com.stop();
}