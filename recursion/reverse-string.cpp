/*Write a program in C++ to reverse string using recursion*/        
#include<iostream>
using namespace std;
void reverseString(string s,int start,int end){
    if(start>end){
        cout<<s;
    }
    swap(s[start],s[end]);
    reverseString(s,start+1,end-1);
}
int main()
{
    string s="hello";
    int start=0;
    int end=5;
    reverseString(s,start,end);
}