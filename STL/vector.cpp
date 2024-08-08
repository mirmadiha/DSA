/*Write a program in C++ to use vectors */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector<int>v;
    vector<int>v(5,1);
    cout<<"vector v:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    vector<int>w(v);  //add elements of vector v into vector w
    cout<<"vector w:"<<endl;
      for(int i=0;i<w.size();i++){
        cout<<w[i]<<endl;
    }
    cout<<"capacity of vector v:"<<v.capacity()<<endl;
    cout<<"capacity of vector w:"<<w.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity of vector v:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity of vector v:"<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"capacity of vector v:"<<v.capacity()<<endl;
    cout<<"size of vector v:"<<v.size()<<endl;
    cout<<"Element at 2nd index:"<<v.at(2)<<endl;
    cout<<"First element of vector=>"<<v.front()<<endl;
    cout<<"last element of vector=>"<<v.back()<<endl;
    v.pop_back();
    for(int i:v){   //removes last element from the vector
        cout<<i<<" "; 
    }
    cout<<"size before clear:"<<v.size()<<endl;
    v.clear();              //clears all elements of the vector
    cout<<"size after clear:"<<v.size()<<endl; 
}