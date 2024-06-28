/*Write a program in C++ to print the sum of n number of natural numbers*/
#include<iostream>;
using namespace std;
int main()
{
    int n;
    int i=1;
    int sum=0;
    cout<<"Enter a number : "<<"  ";
    cin>>n;
    while(i<=n){
        cout<<i<<endl;
        sum=sum+i;
        i++;
    }
    cout<<"The sum of n number of natural numbers is : "<<sum<<endl;

}