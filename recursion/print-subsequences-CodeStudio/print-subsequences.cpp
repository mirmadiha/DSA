/*Write a program in C++ to print all the subsequences*/
#include<iostream>
#include<vector>
using namespace std;
void printSubsequences(vector<int> &nums, vector<int> &arr ,int index){
    int size=nums.size();
    if(index==size){
        cout<<"{"<<" ";
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        } 
        cout<<"}"<<endl;
        return;
    }

    arr.push_back(nums[index]);
    printSubsequences(nums,arr,index+1);
    arr.pop_back();
    printSubsequences(nums,arr,index+1);
}
int main()
{
    vector<int>nums={1,2};
    vector<int>arr;
    int index=0;
    printSubsequences(nums,arr,index);
    return 0;
}
