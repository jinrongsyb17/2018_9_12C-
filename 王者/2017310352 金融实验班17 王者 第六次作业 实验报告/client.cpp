#include<iostream.h>
#include"client.h"
client::client(){ClientNum++;}//����һ������
client::~client(){ClientNum--;}//����һ������
void client::ChangeServerName(char sn){ServerName=sn;}
void client::showServerName(){cout<<"����������"<<ServerName<<endl;}
void client::showClientNum(){cout<<"�ͻ�������"<<ClientNum<<endl;}
char client::ServerName='A';
int client::ClientNum=0;