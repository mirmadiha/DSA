/*Write a program in C++ to reverse a string using stack*/
#include<iostream>
#include <stack>
using namespace std;
int main()
{
    string str="hello";
    cout<<"string before reverse:"<<str<<endl;

    stack<char>st;
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }

    string ans="";

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    cout<<"string after reverse:"<<ans<<endl;
}