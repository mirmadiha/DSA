/*Write a program in C++ to check whether the array is sorted or not using recursion */
#include<iostream>
using namespace std;
bool sortCheck(int arr[],int size){
    if(size==1||size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=sortCheck(arr+1,size-1);
    }
    return true;
}
int main()
{
    int arr[10];
    cout<<"Enter the elements in the array=> ";
    int n;
    cout<<endl<<"Enter the number of elements=> ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result=sortCheck(arr,n);
    cout<<"The array is sorted or not(1 for true , 0 for false)=> "<<result;
}