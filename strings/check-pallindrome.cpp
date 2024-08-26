/*Write a program in C++ to check whether the string is pallindrome or not*/
#include<iostream>
using namespace std;


int getLength(char str[]){
    int i=0;
    int count=0;
    while(str[i]!=0){
        count++;
        i++;
    }
    return count;
}

char ifLowercase(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
}

bool checkPallindrome(char str[]){
    int i=0;
    int j=getLength(str)-1;
    while(i<=j){
        if(ifLowercase(str[i])==ifLowercase(str[j])){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[20];
    cout<<"Enter the string="<<" ";
    cin>>str;
    int ans=checkPallindrome(str);
    cout<<"Is string pallindrome?:"<<ans;
}