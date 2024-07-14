/*Write a program in C++ to check whether a number is prime or not*/
#include<iostream>
using namespace std;
bool isPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count<=2){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter the number:"<<" ";
    cin>>n;
    int ans=isPrime(n);
    cout<<"The answer is:  "<<"  "<<ans<<endl;
    cout<<"(1 means its prime and 0 means its not prime)"<<endl;
}