/*Write a program in C++ to use stack STL
stack uses the concept of LIFO i.e LAST IN FIRST OUT*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("hope");
    s.push("all");
    s.push("good");

    cout<<"Top element:"<<s.top()<<endl;
    s.pop();  //removes the last or top element
    cout<<"Top element:"<<s.top()<<endl;
    cout<<"size of stack:"<<s.size()<<endl;
    cout<<"stack empty or not? "<<s.empty()<<endl;

    
}