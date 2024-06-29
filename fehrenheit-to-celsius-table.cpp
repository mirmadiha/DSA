/*Write a program in C++ to convert temperature from fehrenheit to celsius*/
#include<iostream>
using namespace std;
int main()
{
    float c;
    float f;
    cout<<"Enter temperature in celsius :"<<" ";
    cin>>c;
    f=1.8*c+32;
    cout<<"The temperature in fehrenheit is :"<<" "<<f;
    return 0;
}