/*Write a program in C++ to say digits using recursion*/
#include<iostream>
#include<map>
using namespace std;
void sayDigits(int n,map<int,string>digitMap){
    if(n==0){
        return;
    }
    
    int digit=n%10;
    n=n/10;
    sayDigits(n,digitMap);
    cout<<digitMap[digit]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number:"<<" ";
    cin>>n;
    map<int,string>digitMap;
    digitMap[0]="zero";
    digitMap[1]="one";
    digitMap[2]="two";
    digitMap[3]="three";
    digitMap[4] = "four";
    digitMap[5] = "five";
    digitMap[6] = "six";
    digitMap[7] = "seven";
    digitMap[8] = "eight";
    digitMap[9] = "nine";

    sayDigits(n,digitMap);
}
