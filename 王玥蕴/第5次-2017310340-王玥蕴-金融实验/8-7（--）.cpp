#include<iostream>
using namespace std;
class Fraction						//���ࣻ
{
	friend ostream& operator<<(ostream& out, const Fraction& x);
private:
	int den;						//�ӵĲ������룬ʹ�Լӵľ��벻��1��
	int num;						//������ֵ��
public:
	Fraction(int d = 1, int n = 0) :den(d), num(n) {}
	Fraction& operator--()			//ǰ׺++���أ�ǰ�ð汾prefix��
	{
		num -= den;					//���������ٷ��أ�
		return *this;
	}
	const Fraction operator--(int)	//��׺++���أ����ð汾postfix��
	{
		Fraction old(*this);		//�������졣�ȷ��أ���������
		--(*this);					//���õ������ص�ǰ�ð汾��
		return old;
	}
};

ostream& operator<<(ostream& out, const Fraction& x)
{
	out << x.num << endl;
	return out;
}

int main(void)
{
	Fraction b(30, 15);
	cout << b-- << endl;
	cout << --b << endl;

	return 0;
}