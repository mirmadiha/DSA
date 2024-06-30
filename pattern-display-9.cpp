/*Write a program in C++ to display the following pattern
1
2 3
3 4 5
4 5 6 7
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
        int val=i;
        int j=1;
        while(j<=i){
            cout<<val<<" ";
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
}