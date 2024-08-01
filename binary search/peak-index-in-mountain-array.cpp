/*Write a program in C++ to find the peak index in mountain array*/
#include<iostream>
using namespace std;
int peak(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[mid+1]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return s;
}


int main()
{
    int arr[3]={0,1,0};
    int ans=peak(arr,3);
    cout<<"The index of the peak element of the array is:"<<" "<<ans;
    return 0;
}