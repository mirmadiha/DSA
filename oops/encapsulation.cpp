/*Write a program in C++ to use the concept of encapsulation in oops*/
#include<iostream>
using namespace std;

class Student{
    private:
       string name;
       int age;
       int height;

    public:
       int getAge(){
        return this->age;
       }   
};

int main()
{
    Student First;
    cout<<"Sab sahi chal rha hai"<<endl;
}