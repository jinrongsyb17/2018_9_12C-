#include<iostream>
using namespace std;
enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
class CPU
{
private:
    CPU_Rank rank;
 int frequency;
 float voltage;
public:
 CPU(int newrank,int newfrequency,float newvoltage);
 void run();
 void stop();
 ~CPU(){cout<<"�ɹ�������������"<<endl;}
};
void CPU::run()
{
 cout<<"����ʼִ��"<<endl;

}
void CPU::stop()
{
 cout<<"�������"<<endl;
}
CPU::CPU(int newrank,int newfrequency,float newvoltage)
{
 rank=(CPU_Rank)newrank;
 frequency=newfrequency;
 voltage=newvoltage;
    cout<<"�ɹ����ù��캯��"<<endl;
 cout<<"�ȼ���"<<CPU_Rank(P1)<<endl;
 cout<<"Ƶ�ʣ�"<<frequency<<endl;
 cout<<"��ѹ��"<<voltage<<endl;
}
int main()
{
 CPU cpu(2,60,220);
 cpu.run();
 cpu.stop();
 return 0;
}
