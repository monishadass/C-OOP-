//Solution the diamond problem in multiple inheritance using OOP C++ code
#include<iostream>
using namespace std;
class A{
    public:
void show(){
cout<<"parent class"<<endl;
}

};
class B:public A{



};
class C: public A{

};
class D: public B, public C{

};
int main(){
D ob;
ob.B::show();
ob.C::show();
return 0;

}


