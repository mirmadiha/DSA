/*Write a program in C++ to display the following pattern
1
2 3
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<" ";
    cin>>n;
    int count=1;
    int rows=1;
    while(rows<=n){
        int col=1;
        while(col<=rows){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        rows++;

    }
}