/*Write a program in C++ to print power of 2*/
#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int ans=2*power(n-1);
    return ans;
}
int main()
{
    int n;
    cout<<"enter the power:"<<""<<endl;
    cin>>n;
    int answer=power(n);
    cout<<answer<<endl;
}
