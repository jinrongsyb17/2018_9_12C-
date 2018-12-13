#include<iostream>
using namespace std;

class point{
	public:
		point(){
			x=0;
			y=0;
		}
		point(int a,int b):x(a),y(b){
		}
		point operator++();//����ǰ��++ 
		point operator++(int);//���غ���++ 
		point operator--();//����ǰ��--
		point operator--(int);//���غ���-- 
		void show(){
		cout<<"("<<x<<","<<y<<")"<<endl;
		}
	private:
	int x,y;	
}; 

point point::operator++(){
	return point(++x,++y);
}

point point::operator++(int){
	point old=*this;
	++(*this);
	return old;
}

point point::operator--(){
	return point(--x,--y);
}

point point::operator--(int){
	point old=*this;
	--(*this);
	return old;
}

int main(){
	point p(2,3);
	cout<<"p=";p.show();
    cout<<"++p=";(++p).show();
	cout<<"p++=";(p++).show();
	cout<<"++p=";(++p).show();
	cout<<"--p=";(--p).show();
	cout<<"p--=";(p--).show();
	cout<<"--p=";(--p).show();
	 return 0;
}
