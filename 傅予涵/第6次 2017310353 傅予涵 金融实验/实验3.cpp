#include"client.h"                 

#ifndef WYL_CLIENT_H                       
#define WYL_CLIENT_H                                     
class CLIENT
{
public:
	CLIENT () {ClientNumber++;};                         
	CLIENT(CLIENT&xc);

	static void ChangeServerName(char ch);             
	static void ShowServerName();
	void ShowClientNumber();

	~CLIENT();         
private:
	static char ServerName;
	static int ClientNumber;		    
};
#endif;

#include<iostream>
using namespace std;
char c='T';
char CLIENT::ServerName=c;				    
int  CLIENT::ClientNumber=0;

CLIENT::CLIENT(CLIENT&xc)
{
	ClientNumber++;                           
	ServerName=xc.ServerName;
}

CLIENT::~CLIENT(){ClientNumber--;cout<<"��������������"<<endl;}   

 void CLIENT::ChangeServerName(char ch)
{
	ServerName=ch;                          
}
void CLIENT::ShowServerName(){cout<<"������������Ϊ��"<<ServerName<<endl;}         

void CLIENT::ShowClientNumber(){cout<<"����Ϊֹ�ͻ�������ĿΪ��"<<ClientNumber<<endl;}          

#include"client.h"                    
#include<iostream>
using namespace std;
int main ()
{ 
	char ch1 = 'A',ch2 = 'B',char3 = 'C';             

	cout << "���躭 2017310353" << endl;

	CLIENT::ShowServerName();                 

	CLIENT myclient;
	CLIENT::ChangeServerName(ch1);
	myclient.ShowClientNumber();
	myclient.ShowServerName();

	CLIENT client2(myclient);
	CLIENT::ShowServerName();
	client2.ChangeServerName(ch2);
	client2.ShowServerName();
	client2.ShowClientNumber();

	return 0;

}
