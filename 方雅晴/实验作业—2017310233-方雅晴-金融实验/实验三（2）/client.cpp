#include"client.h"
#include<iostream>
#include<string> 
using namespace std;

int CLIENT::total=0;
CLIENT::CLIENT(string n,string s,int a,bool v):name(n),sex(s),age(a),vip(v)
{
total+=1;
cout<<"creat a client with information"<<endl;
}

string CLIENT::get_vip()
{
	if (vip == 0)
		return "no";
	else
		return "yes";
}
void CLIENT::get_information() 
{
	cout << "������" << name << "\t�Ա�" << sex << "\t���䣺" << age << "\tVIP:" << get_vip()<< endl;
}
void CLIENT::get_total() 
{
	cout<<"Ŀǰ��"<< total<<"λ�ͻ�"<<endl;
}

CLIENT::CLIENT():name("null"), sex("null"), age(0), vip(0) {
	total+=1;
	cout<<"creat a client without information"<<endl;	
}

CLIENT::~CLIENT()
{   total-=1;
	cout<<"delete client "<<name<<endl; 
}
