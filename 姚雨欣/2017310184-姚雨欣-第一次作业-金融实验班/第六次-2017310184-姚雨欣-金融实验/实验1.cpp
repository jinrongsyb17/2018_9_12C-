#include <iostream>
using namespace std;

enum CPUrank{ p1,p2,p3,p4,p5,p6,p7 };
class CPU {
public:
	CPU(int drank, int dfrequency, float dvoltage) {
		cout << "�������ڵ��ù��캯��";
	}
	~CPU() {
		cout << "���ڵ�����������";
	}
	void run() {
		cout << "����������";
	}
	void stop() {
		cout << "����ֹͣ����";
	}
private:
	int frequency;
	float voltage;
	CPUrank rank;
};

CPU::CPU(int drank, int  dfrenquency, float dvoltage) {
	rank = drank;
	frequency = dfrequency;
	voltage = dvoltage;
}

int main() {
	CPU cpu(12, 29, 13);
	cpu.run();
	cpu.stop();
	return 0;

}