/*Write a program in C++ to check whether the string is a pallindrome or not using recursion*/
#include<iostream>
using namespace std;
bool checkPallindrome(string s, int start,int end){
    if(start>end){
        return 1;
    }
    if(s[start]!=s[end]){
        return 0;
    }
    else{
        checkPallindrome(s,start+1,end-1);
    }
}
int main()
{
    int start=0;
    int end=6;
    string s="racecar";
    if(checkPallindrome(s,start,end)){
        cout<<"Yes! it is a pallindrome!";
    }
    else{
        cout<<"No! It is not a pallindrome.";
    }

    return 0;
}