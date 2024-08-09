/*Write a program in C++ to use set STL
in which every element should be unique-----has 2 types sorted and unsorted set*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
   set<int>s;
   s.insert(5); 
   s.insert(5);
   s.insert(5);
   s.insert(1);
   s.insert(6);
   s.insert(6);
   s.insert(0);
   s.insert(0);
   s.insert(0);

   for(auto i:s){
    cout<<i<<endl;
   }

   s.erase(s.begin());
   cout<<"after erase first element:"<<endl;
    for(auto i:s){
    cout<<i<<endl;
   }

   cout<<"is present or not=>"<<s.count(5)<<endl;
   cout<<"is present or not=>"<<s.count(-1)<<endl;

   set<int>::iterator itr=s.find(5);
      for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
   }cout<<endl;
}