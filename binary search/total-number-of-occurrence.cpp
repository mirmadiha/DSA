/*Write a program in C++ to find the total number of occurrence of key n the array*/
#include<iostream>
using namespace std;
int fo(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int result=-1;
    while(s<=e){
        if(arr[mid]==k){
            result=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return result;
}

int lo(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int result=-1;
    while(s<=e){
        if(arr[mid]==k){
            result=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return result;
}


int main()
{
    int k;
    cout<<"Enter the key:"<<" ";
    cin>>k;
    int arr[7]={2,3,5,5,5,5,9};
    int ans1=fo(arr,7,k);
    int ans2=lo(arr,7,k);
    cout<<"The index of first occurrence is:"<<" "<<ans1<<endl;
    cout<<"The index of second occurrence is:"<<" "<<ans2<<endl;
    int occ=(ans2-ans1)+1;
    cout<<"The total number of occcurrence of the array is :"<<occ<<endl;
    return 0;
}