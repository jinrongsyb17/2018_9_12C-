#include<iostream>
#include<iomanip>
#include"Array.h"
using namespace std;


int main(){
	int n;
	double average,total=0;
	cout<<"������ѧ��������"<<endl;
	cin>>n; 
	Array<double> score(n);
	for(i=0;i<n;i++)
	{cout<<"�������"<<i+1<<"��ѧ���ĳɼ���"<<endl;
	cin>>score[i];
	total+=score[i]; 
	}
	average=total/n;
	cout<<"ƽ����="<<average<<endl;
	return 0; 
} 
