#include<iostream.h>
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
enum RAM_Rank{G1=1,G2,G4,G8};
enum CDROM_Rank{M700=1,M750,M800};
enum CDROM_Speed{X24=1,X36,X40,X50};

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
};

class RAM{
private:
	RAM_Rank ramRank;
	float speed;
public:
	//���캯��
	RAM(RAM_Rank r, float s){
		ramRank=r;
		speed=s;
		cout<<"constructing a RAM"<<endl;
	}
	//�������캯��
	RAM(RAM &p){
		ramRank=p.ramRank;
		speed=p.speed;
		cout<<"����������һ��RAM"<<endl;
	}
	//��������
	~RAM(){cout<<"������һ��RAM"<<endl;}

	RAM_Rank getRank(){return ramRank;}
	float getspeed(){return speed;}

	void setRank(RAM_Rank r){ramRank=r;}
	void setspeed(float s){speed=s;}
};

class CDROM{
private:
	CDROM_Rank cdromRank;
	CDROM_Speed cdromSpeed;
public:
	//���캯��
	CDROM(CDROM_Speed s,CDROM_Rank r){
		cdromSpeed=s;
		cdromRank=r;
		cout<<"������һ��CDROM"<<endl;
	}
	//�������캯��
	CDROM(CDROM &p){
		cdromSpeed=p.cdromSpeed;
		cdromRank=p.cdromRank;
		cout<<"����������һ��CDROM"<<endl;
	}
	//��������
	~CDROM(){cout<<"������һ��CDROM"<<endl;}
	CDROM_Speed getcdromSpeed(){return cdromSpeed;}
	CDROM_Rank  getcdromRank(){return cdromRank;}
	void setcdromSpeed(CDROM_Speed s){cdromSpeed=s;}
	void setcdromRank(CDROM_Rank r){cdromRank=r;}

};

class computer{
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
public:
	//���캯��
	computer(CPU c,RAM r,CDROM cd):cpu(c),ram(r),cdrom(cd){
		cout<<"������һ��computer"<<endl;
	}
	//�������캯��
	computer(computer &p):cpu(p.cpu),ram(p.ram),cdrom(p.cdrom){
		cout<<"����������һ��computer"<<endl;
	}
	//��������
	~computer(){cout<<"������һ��computer"<<endl;}
	void run(int a){cout<<"computer"<<a<<"��ʼ����"<<endl;}
	void stop(int a){cout<<"computer"<<a<<"stop"<<endl;}
};
void main(){
	CPU cpu1(P5,220,3.8);
	RAM ram1(G2,200);
	CDROM cdrom1(X50,M800);
	computer computer1(cpu1,ram1,cdrom1);
	computer1.run(1);
	computer1.stop(1);
	computer computer2(computer1);
	computer2.run(2);
	computer2.stop(2);
}











