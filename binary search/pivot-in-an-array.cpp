/*Write a program in C++ to find the pivot index of the array*/
#include<iostream>
using namespace std;
int pivot(int array[],int size){
    int start=0;
    int end=size-1;
    int midPoint=start+(end-start)/2;
    while(start<end){
        if(array[midPoint]>array[0]){
            start=midPoint+1;
        }
        else{
            end=midPoint;
        }
        midPoint=start+(end-start)/2;
    }
    return start;;
}


int main()
{
    int array[]={3,8,10,17,1};
    int result=pivot(array,5);
    cout<<"The pivot index of the array is:"<<" "<<result<<endl;
    return 0;
}