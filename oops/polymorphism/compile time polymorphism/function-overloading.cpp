/*Write a program in C++ to use the concepts of polymorphism*/
#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello there"<<endl;
    }

    //change in return type is not acceptable 
    //ONLY the change in input is accepted

    // int sayHello(){
    //     cout<<"Hello there"<<endl;
    //     return 1;
    // }

    void sayHello(string name){
        cout<<"Hello "<< name<<endl;
    }

    //below the return type wont affect but the input will
    int sayHello(int n){
        cout<<"Hello there"<<endl;
        return n;
    }
};

int main()
{
   A object;
    object.sayHello(); //first function called 
    object.sayHello("Peter"); //second function called with same name but different input
    object.sayHello(2); //third function called with same name different return-type(which doesnot affect) and different input
    return 0;
}