/*Write a program in C++ to use queue STL
queue means lines and uses FIFO concept i.e, FIRST IN FIRST OUT*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q;
    q.push("hope");
    q.push("all");
    q.push("good");
    cout<<"first element:"<<q.front()<<endl;
    cout<<"size before pop: "<<q.size()<<endl;
    q.pop();
    cout<<"first element after pop:"<<q.front()<<endl;
    cout<<"size after pop: "<<q.size()<<endl;
}