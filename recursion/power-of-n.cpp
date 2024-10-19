/*Write a program in C++ to find 2^n using recursion */
#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int result=2*power(n-1);
    return result;
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<" ";
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
}