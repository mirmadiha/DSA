/*Write a program in C++ to print the sum of all elements of an arra*/
#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"The sum of the elements of the array = "<<sum<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array="<<" ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index "<<i<<" ="<<" ";
        cin>>arr[i];
    }
    int result=sum(arr,n);
}