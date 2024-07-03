/*Write a program in C++ to check whetherthe input number is prime or not*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<" ";
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
}
  if(isprime==0){
            cout<<"It is NOT a prime number"<<endl;
        }
        else{
            cout<<"It is a prime number";
        }
}