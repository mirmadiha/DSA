#include <iostream>
using namespace std;

int main(){

    //creation 
    unordered_map<string,int>m;

    //insertion

    //1
    pair<string,int>p=make_pair("Madiha",1);
    m.insert(p);

    //2
    pair<string,int>p1("is",2);
    m.insert(p1);

    //3
   m["is"]=3; //creation 
   m["is"]=4; //updation

   //search
   cout<<m["Madiha"]<<endl;
   cout<<m.at("is")<<endl;

   cout<<m["unknownKey"]<<endl;
    cout<<m.at("unknownKey")<<endl;


    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("Madiha")<<endl;


    //erase
    m.erase("Madiha");
    cout<<m.size()<<endl;

    //accessing elements
    //1-loop
    for (auto i:m){
        cout<<i.first<<""<<i.second<<endl;
    }

    //2-iterator
    unordered_map<string,int> :: iterator it=m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

   return 0;
}
