/*Write a program in C++ to find the pivot index of the array*/
#include <iostream>
using namespace std;

int pivotIndex(vector<int>&arr,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]>arr[0]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main () {
    vector<int>arr={3,8,10,17,1};
    int size=arr.size();
    int pivot=pivotIndex(arr,size);
    cout<<"Pivot index is: "<<pivot<<endl;
}
