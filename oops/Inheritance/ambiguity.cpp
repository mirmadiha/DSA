/*Write a program in C++ to use the concept of ambiguity in inheritance*/
#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"function 1 called"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"function 2 called"<<endl;
    }
};

class C:public A, public B{
    public:
    void func3(){
        cout<<"function 3 called"<<endl;
    }
};

int main()
{
    C object1;

    // object1.func();

    object1.A::func(); //scope resolution operator
    object1.B::func();
    return 0;
}