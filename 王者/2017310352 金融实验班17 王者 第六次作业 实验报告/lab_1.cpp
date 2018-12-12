#include<iostream.h>
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	//���캯��
	CPU(CPU_Rank r, int f,float v){
		rank=r;
		frequency=f;
		voltage=v;
		cout<<"������һ��CPU"<<endl;
	}
	//�������캯��
	CPU(CPU &p){
		rank=p.rank;
		frequency=p.frequency;
		voltage=p.voltage;
		cout<<"����������һCPU"<<endl;
	}
	//��������
	~CPU(){cout<<"������һ��CPU"<<endl;}

	CPU_Rank GetRank(){return rank;}
	int Getfrequency(){return frequency;}
	float Getvoltage(){return voltage;}

	void setRank(CPU_Rank r){rank=r;}
	void setfrequency(int f){frequency=f;}
	void setvoltage(float v){voltage=v;}
	void run(){cout<<"CPU��ʼ����"<<endl;}
	void stop(){cout<<"CPU stop"<<endl;}
};

void main(){
	CPU a(P5,230,3.1);
	a.run();
	a.stop();
	CPU b(a);
	b.run();
	b.stop();
}





