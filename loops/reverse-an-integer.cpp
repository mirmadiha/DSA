//Write a program to reverse an integer
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<" ";
    cin>>num;
    int n=num;
    int newnum=0;
    for(int i=1;n!=0;i++){
        int remainder=n%10;
        if((newnum>INT_MAX/10)||(newnum<INT_MIN/10)){
        return 0;
    }
        newnum=newnum*10+remainder;
        n=n/10;
    }
    cout<<endl<<"The reverse of the number "<<num<<" is "<<newnum;
    return 0;
}