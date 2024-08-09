/*Write a program in C++ to use deque in STL*/
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    /*The functions for deque are same as vector,
    with an addition of push and pop operations for both front and back.*/
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }  
    cout<<"First index element"<<d.at(1)<<endl;
    
   // d.pop_back();
    //  for(int i:d){
    // cout<<i<<" "; 
    // } 
    cout<<"First element"<<d.front()<<endl;//it will display first element
    cout<<"last  element:"<<d.back()<<endl;//it will display last element
    cout<<"Empty or not?"<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+1 );//we need to give the range to delete
    cout<<"after erase:"<<d.size()<<endl;
}