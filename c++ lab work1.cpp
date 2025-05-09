#include <iostream>
using namespace std;
class Student{
public :
    string name;
    string section;
    int id;
    void display1(){
        cout<<"Name : "<<name<<endl;
        cout<<"Section : "<<section<<endl;
        cout<<"ID : "<<id<<endl;
    }
};
class Result : public Student{
public :
    float mark;
    void grade(){
        cout<<"Enter your mark : "<<endl;
  cin>>mark;
        if(mark >= 80 && mark <=100){
            cout<<"A+"<<endl;
        }
        else if(mark >=70 && mark <= 79){
            cout<<"A"<<endl;
        }
        else if(mark >= 60 && mark <= 69){
            cout<<"A-"<<endl;
        }
        else if(mark >= 50 && mark <= 59){
            cout<<"B"<<endl;
        }
        else if(mark >= 40 && mark <= 49){
            cout<<"C"<<endl;
        }
        else{
            cout<<"F"<<endl;
        }
    }

    void display2(){
        display1();
    }
};
int main(){
    Result s1;
    s1.name = "Bahiya";
    s1.section = "D";
    s1.id = 2363;
    //s1.mark = 89;
    s1.display2();
    s1.grade();
}
