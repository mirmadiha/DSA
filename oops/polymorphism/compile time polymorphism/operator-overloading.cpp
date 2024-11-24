/*Write a program in C++ to use the concept of operator overloading (type of compile time polymorphism)*/
#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output = "<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"hey there!"<<endl;
    }
};

int main()
{
   B obj1 , obj2;
   obj1.a=4;
   obj2.a=7;
   obj1 + obj2;

   obj1();
   return 0; 
}