/*Write a program in C++ to perform bubble sort using recursion*/
#include<iostream>
using namespace std;

void bubblePass(int arr[], int n,int i){
    if(i==n-1){
        return;
    }

    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }

    bubblePass(arr,n,i+1);
}

void bubbleSort(int arr[],int n){
    if(n==1){
        return ;
    }
        bubblePass(arr,n,0);
        bubbleSort(arr,n-1);


}

int main()
{
    int arr[]={4,2,7,1,9};
    int n=5;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}