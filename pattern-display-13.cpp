/*Write a program in C++ to display the following pattern
A
B C
C D E
D E F G*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<" ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}