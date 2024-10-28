/*Write a program in C++ to calculate a^b using recursion*/
#include<iostream>
using namespace std;
int getPower(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(a==0){
        return 0;
    }
    
    int ans=getPower(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the value of a=>";
    cin>>a;
    cout<<endl<<"Enter the value of b=>";
    cin>>b;
    int ans=getPower(a,b);
    cout<<a<<" to the power "<<b<<" is => "<<ans;
    return 0;
}