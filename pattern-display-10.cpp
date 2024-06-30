/*Write a program in C++ to display the following pattern
1
2 1
3 2 1
4 3 2 1
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
        int count=i;
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count--;
            j++;
        }
        cout<<endl;
        i++;

    }
}