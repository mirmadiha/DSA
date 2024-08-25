/*Write a program in C++ to find the length of string*/
#include<iostream>
using namespace std;
int getlength(char arr[]){
    int i=0;
    int count=0;
    while(arr[i]!=0){
        count++;
        i++;
    }
    return count;
}
int main()
{
  char arr[20];
  cout<<"Enter the length of string="<<"  ";
  cin>>arr;
  int ans=getlength(arr);
  cout<<"The length of the string is:"<<" "<<ans;
}