/*Write a program in C++ to display the following pattern
* * * *
* * * * 
* * * * 
* * * * 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    
}