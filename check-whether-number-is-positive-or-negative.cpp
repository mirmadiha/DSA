#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter any number :"<<endl;
    cin>>a;
    if(a>0){
        cout<<"The number is positive"<<endl;
    }
    else if(a<0){
        cout<<"The number is negative"<<endl;
    }
    else{
        cout<<"The number is 0"<<endl;
    }
}