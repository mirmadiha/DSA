/*Write a program in C++ to find whether the number is even or odd*/
#include<iostream>
using namespace std;
bool isEven(int a){
    /*if the number is even return 1 if it is odd return 0*/
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int a;
    cout<<"Enter the number:"<<" ";
    cin>>a;
    int ans=isEven(a);
    cout<<"The answer is "<<ans<<" "<<"(1 denotes even and 0 denotes odd)"<<endl;
}