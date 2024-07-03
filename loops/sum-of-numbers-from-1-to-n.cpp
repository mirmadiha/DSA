/*Write a program in C++ to find the sum of numbers from 1 to n*/
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a number:"<<" ";
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
cout<<i<<endl;
sum=sum+i;
}
cout<<"The sum of all numbers is:"<<" "<<sum;j
}