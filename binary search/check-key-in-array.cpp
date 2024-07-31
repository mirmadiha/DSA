/*Write a program in C++ to check whether the given key exists in the array or not*/
#include<iostream>
using namespace std;
int bs(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
    if(k==arr[mid]){
        return mid;
    }
    else if(k<arr[mid]){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=(s+e)/2;
    }
    return -1;
}


int main()
{
    int key;
    cout<<"Enter the key:"<<" ";
    cin>>key;
    int arr[8]={2,10,16,18,20,26,30,35};
    int ans=bs(arr,8,key);
    cout<<"The index of "<<key<< " is: "<<" "<<ans;
}