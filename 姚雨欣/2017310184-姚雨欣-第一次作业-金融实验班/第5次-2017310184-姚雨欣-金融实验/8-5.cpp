#include <iostream>
using namespace std;

class mammal {
public:
	mammal() {
		cout << "�����ڵ���mammal�Ĺ��캯��" << endl;
	}
	virtual~mammal() {
		cout << "���ڵ�����mammal����������" << endl;
	}
	virtual void speak()const {
		cout << "mammai speak" << endl;
	}
};

class dog :public mammal {
public:
	dog() {
		cout << "���ڵ���dog�Ĺ��캯��" << endl;
	}
		~dog() {
			cout << "���ڵ���dog����������" << endl;
	}
		void speak() const{
			cout << "dog speak" << endl;
		}
};

int main() {
	mammal *p = new dog;
	p->speak();
	delete p;
	return 0;
	system("pause");
}