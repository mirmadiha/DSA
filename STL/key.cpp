/*Write a program in C++ to use key STL
all values are unique----one key will point to only one value*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;

    m[1]="hope";
    m[12]="all";
    m[3]="good";

    m.insert({5,"sunny"}); //another way of adding key

    cout<<"before erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13=>"<<m.count(13)<<endl;

    cout<<"after erase"<<endl;

    m.erase(12);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }


}