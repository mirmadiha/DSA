/*Write a program in C++ to */
#include<iostream>
using namespace std;
int findPower(int a , int b){
    int power;
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(b%2==0){
        power=findPower(a,b/2)*findPower(a,b/2);
    }
    else{
        power=a*(findPower(a,b/2)*findPower(a,b/2));
    }
    return power;
}
int main()
{
    int a,b;
    cout<<"Enter value of a:"<<" ";
    cin>>a;
    cout<<"Enter value of b:"<<" ";
    cin>>b;
    int answer=findPower(a,b);
    cout<<endl;
    cout<<"The power(a,b) = "<<answer<<endl;
}