/*Write a program in C++ to display fibonacci series upto number n*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<" ";
    cin>>n;
    int a=0;
    int b=1;
    int nextnum;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        nextnum=a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
    } 
}