#include<iostream>
using namespace std;

class Counter {
public:Counter(int n) { count = n; }
	   Counter() {};
	   const Counter operator+(const Counter &c2){ return Counter(count + c2.count); }
	   void set(){
		   int n;
		   cin >> n;
		   count = n;
	   }
	   void display() { cout << count << endl; };
private:int count;
};
int main() {
	Counter c1, c2, c3;
	
	cout << "����������1:"; c1.set();
	cout << "����������2:"; c2.set();
	c3 = c1 + c2;
	cout << "����֮��Ϊ��"; c3.display();
	
	system("pause");
	return 0;
	
	
}