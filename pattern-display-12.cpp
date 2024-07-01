/*Write a program in C++ to display the following pattern
A B C
C D E
E F G
*/
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
        while(j<=n){
            char val='A'+i+j-2;
            cout<<val<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}