/*Write a program in C++ to use Arrays and its functions*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3]={1,2,3};  //basic array
    array<int,4>a={1,2,3,4}; //STL array
    int size=a.size(); //easy way to find the size of array
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element of 2nd index=>"<<a.at(2)<<endl;
    cout<<"Empty or not=>"<<a.empty()<<endl;
    cout<<"First element=>"<<a.front()<<endl;
    cout<<"Last elemennt=>"<<a.back()<<endl;
}