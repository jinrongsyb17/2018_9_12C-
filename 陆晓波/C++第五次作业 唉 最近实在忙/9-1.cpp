#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
class BaseClass{
public:
virtual ~BaseClass() ;
};
BaseClass::~BaseClass(){
cout << "Base destructor" << endl ;
}
class DerivedClass:public BaseClass{
public:
~DerivedClass() ;
};
DerivedClass::~DerivedClass(){
cout << "derived destructor" << endl ;
}
int main(){
BaseClass *b = new DerivedClass() ;
delete b ;
return 0 ;
}
