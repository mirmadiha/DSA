/*Write a program in C++ to find the exponential power of a number*/
#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the number: "<<" ";
    cin>>a;
    cout<<"Enter the power: "<<" ";
    cin>>b; 
    int d=power(a,b);
    cout<<"The answer is:"<<d<<endl;
}