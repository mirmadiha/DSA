/*Write a program in C++ to use the concept of multilevel inheritance*/
#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};

class germanShephard: public Dog{
    public:
    int name;
    void sleep(){
        cout<<"sleeping"<<endl;
    }
};

int main()
{
    germanShephard d1;
    d1.speak();
    d1.eat();
    d1.sleep();
    cout<<d1.age<<endl;
    cout<<d1.weight<<endl;
    cout<<d1.name<<endl;
}