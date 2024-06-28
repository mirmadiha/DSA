/*Write a program in C++ to display the sum of  all even numbers*/
#include<iostream>;
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<"  ";
    cin>>n;
    int sum=0;
    int i=1;
    cout<<"The even numbers are :"<<" ";
    while(i<=n){
        if(i%2==0){
            cout<<i<<"   "<<" ";
            sum=sum+i;
        }
        i++;
    }
    cout<<endl<<"The sum of even numbers is: "<<sum<<endl;
}