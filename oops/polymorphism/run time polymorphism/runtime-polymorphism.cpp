/*Write a program in C++ to apply the concepts of runtime polymorphism*/
#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main()
{
   Dog obj;
   obj.speak(); 
   return 0;
}