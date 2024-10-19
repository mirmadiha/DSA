/*Write a program in C++ to print counting using recursion*/
#include<iostream>
using namespace std;
void printCount(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printCount(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<" => ";
    cin>>n;
    cout<<endl;
    printCount(n);
    return 0;
}