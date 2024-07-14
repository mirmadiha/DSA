/*Write a program in C++ to find ncr program (ncr=n!/r!*(n-r)!*/
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    cout<<"the value of n:"<<" ";
    cin>>n;
    cout<<"The value of r:"<<" ";
    cin>>r;
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    cout<<"The value of ncr="<<num/denom<<endl;
}

int main(){
    int n,r;
    int ans=ncr(n,r);
}