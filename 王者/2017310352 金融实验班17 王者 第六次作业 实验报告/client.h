#ifndef CLIENT_H
#define CLIENT_H
//���о�̬��ԱΪ������ԣ�Ϊ���е���Ķ���ͬӵ��
class client{
public:
	client();
	~client();
	static void ChangeServerName(char ss);//�ı����������
	static void showServeName();
	static void showClientNum();
private:
	static char ServeName;//�����������������˵��
	static int ClientNum;//��¼�Ѿ�����Ŀͻ������󣩵�����������˵��
}��
#endif