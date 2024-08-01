/*Write a program in C++ to find the first andd last occurence of the key in the array*/
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
            e=mid-1;//move to left
            }
            //check towards right
            else if(k>arr[mid]){
                s=mid+1;
            }
            else{//move towards left
                e=mid-1;
            }
            mid=s+(e-s)/2;
    }
      return result;
}

int lo(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int result=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
      
        if(arr[mid]==k){
            result=mid;
            s=mid+1;//move towards right
            }
            //check towards right
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
    int arr[8]={2,5,6,6,6,6,6,7};
    int ans1=fo(arr,5,k);
    int ans2=lo(arr,5,k);
   cout<<"The first occurence of the key is:"<<" "<<ans1<<endl;
   cout<<"The last occurence of the key is:"<<" "<<ans2<<endl;
}