/*Write a program in C++ to find the power of 2*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int ans;
    cout<<"Enter the number:"<<" ";
    cin>>ans;
    for(int i=0;i<=30;i++){
        if(ans==pow(2,i)){
            return true;
        }
        else{
            return false;
        }
    }
}