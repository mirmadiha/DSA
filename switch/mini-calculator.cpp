/*Write a program in C++ to create a mini calculator*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter the first number:"<<" ";
    cin>>a;
    cout<<"Enter the second number:"<<" ";
    cin>>b;
    cout<<"Enter the operation to be performed(+,-,*,/,%):"<<" ";
    cin>>op;
    switch(op){
        case '+':cout<<a<<'+'<<b<<"="<<a+b;
        break;
        case '-':cout<<a<<'-'<<b<<"="<<a-b;
        break;
        case '*':cout<<a<<'*'<<b<<"="<<a*b;
        break;
        case '/':cout<<a<<'/'<<b<<"="<<a/b;
        break;
        case '%':cout<<a<<'%'<<b<<"="<<a%b;
        break;
        default:cout<<"You entered the wrong operation!"<<endl;
    }
    }