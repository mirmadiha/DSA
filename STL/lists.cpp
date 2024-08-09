/*Write a program in C++ to use STL lists
doubly linked list*/
#include<iostream>
#include<list>
using namespace std;
int main()
{
   list<int>l;
   
   list<int> n(5,100);//(no. of elements , values of all elements)
   for(int i:n){
    cout<<i<<" ";
   }

   l.push_back(1);
   l.push_front(2);
    cout<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl<<"after erase:"<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"size of list:"<<l.size()<<endl;

}