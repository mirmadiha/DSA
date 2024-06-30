/*Write a program in C++ to display the following pattern
3 2 1 
3 2 1 
3 2 1 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: "<<" ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}