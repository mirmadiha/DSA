/*Write a program in C++ to display the following pattern
A A A
B B B
C C C
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<" ";
    cin>>n;
    char val='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<val<<" ";
            j++;
        }
        val++;
        cout<<endl;
        i++;
    }
}