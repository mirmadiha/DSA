/*Write a program in C++ to find the unique element in the array*/
#include<iostream>
using namespace std;
int main()
{
    int ans=0;
  int arr[]={1,4,5,5,4,2,1};
  for(int i=0;i<7;i++){
    ans=ans^arr[i];
  }
  cout<<ans<<endl;
    }