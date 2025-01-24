/*Write a program in C++ to gt sum of all elements of array*/
#include<iostream>
#include<vector>
using namespace std;
int getSum(vector<int> &arr , int size , int sum , int index){
    if(size==0){
        return 0;
    }
    if(index==size){
        return sum;
    }

    sum+=arr[index];

    int answer=getSum(arr,size,sum,index+1);
}
int main()
{
    vector<int>arr={4};
    int sum=0;
    int size=arr.size();
    int index=0;
    int result=getSum(arr,size,sum,index);
    cout<<result<<endl;
}
