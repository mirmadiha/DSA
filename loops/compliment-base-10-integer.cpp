/*Write a program in C++ to dind the compliment of 7*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<" ";
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1) | 1;
        m=m>>1;
    }
    int result=mask & (~n);
    cout<<"The compliment of "<<n<<" is:"<<result<<endl;
}