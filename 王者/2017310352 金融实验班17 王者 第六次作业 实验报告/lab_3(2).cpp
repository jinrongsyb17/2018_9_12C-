#include<iostream.h>
#include"client.h"
void main(){
	client::showServerName();//��ʼ״̬
	client::ChangeClientNum();//�������þ�̬��Ա����
	client::ChangeServerName('B');
	client a;//����һ���û�
	a.ShowServerName();
	a.showClientNum();
	{
		client b;
		b.ShowServerName();
		b.showClientNum();
	}//����һ���û�
	client::ShowServerName();
	client::showClientNum();
}
