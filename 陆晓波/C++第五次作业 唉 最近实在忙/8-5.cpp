#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
class Mammal{
public:
virtual void speak(){cout << "mammal is speaking" << endl ;
}
};
class Dog:public Mammal{
public:
void speak(){cout << "dog is speaking" <<endl ;
}
};
int main(){
Dog d ;
d.speak() ;
return 0 ;
}
