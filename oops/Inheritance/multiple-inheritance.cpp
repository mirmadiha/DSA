/*Write a program in C++ to use the concepts of mutilple inheritance*/
#include<iostream>
using namespace std;
 class Animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
 };

 class Human{
    public:
    string color;
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
 };

class Hybrid:public Animal , public Human{
    public:
    void sleep(){
        cout<<"sleeping"<<endl;
    }
};

int main()
{
    Hybrid object1;
    object1.speak();
    object1.eat();
    object1.sleep();
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;
    return 0;
}