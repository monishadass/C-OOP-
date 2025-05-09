 /*Write a program in C++ to demonstrate the followings:
a) Create an abstract class  'Animal' with a pure virtual function sound() and a function sleep that outputs "This animal is sleeping".
b) Create two derived classes:
    - 'Dog' that outputs "The dog barks.".
    - 'Cat' that outputs "The cat meows.".
c) In the main function, create objects of 'Dog' and 'Cat' classes.
    - Call the 'sound()' function for both objects.
    - Call the 'sleep()' function for both objects.*/
#include<iostream>
using namespace std;
class Animal{
    public:
 virtual void sound()=0;


void sleep(){
cout<< "This animal is sleeping"<<endl;
}
};
class Dog: public Animal{
    public:
void sound(){
cout<< "The dog barks."<<endl;
}

};
class Cat: public Animal{
public:
    void sound(){

cout<< "The cat meows."<<endl;
    }
};
int main(){
Dog ob1;
Cat ob2;
ob1.sleep();
ob1.sound();
ob2.sleep();
ob2.sound();
//if we want to get input from user then below the code
/*int choice ;


while(choice!=3){
 cin>> choice;
    switch(choice){
case 1:
    ob1.sleep();
    ob2.sound();
    break;


case 2:
    ob2.sleep();
    ob2.sound();
    break;
case 3:
    cout<< "not a valid choice" ;
break;
}

}*/
return 0;
}
