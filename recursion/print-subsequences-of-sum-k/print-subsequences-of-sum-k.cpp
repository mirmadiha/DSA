/*Write a program in C++ to print all the subsequences*/
#include<iostream>
#include<vector>
using namespace std;
void printSubsequences(vector<int> &nums, vector<int> &arr ,int index,int k){
    int size=nums.size();
    if(index==size){
        
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        } 
        if(sum==k){
        cout<<"{"<<" ";
            for(int i=0;i<arr.size();i++){
                cout<<arr[i]<<"";
            }
        cout<<"}"<<endl;
        }
        return;
    }

    arr.push_back(nums[index]);
    printSubsequences(nums,arr,index+1,k);
    arr.pop_back();
    printSubsequences(nums,arr,index+1,k);
}
int main()
{
    vector<int>nums={0,1,2};
    vector<int>arr;
    int index=0;
    int k=1;
    printSubsequences(nums,arr,index,k);
    return 0;
}
