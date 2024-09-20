/*Write a program in C++ to find the row wise sum of a 2D array*/
#include<iostream>
using namespace std;
void largestRowSum(int arr[][2],int row,int col){
    int maxi=-1;
    int ans=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        if(maxi<sum){
            maxi=sum;
            ans=i;
        }
        // cout<<"Sum of row"<<i<<"="<<sum<<endl;
    }
    cout<<"The largest row sum is:"<<maxi<<endl;
    cout<<"The row with largest sum is:"<<ans<<endl;
}
int main()
{
    int arr[3][2];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    largestRowSum(arr,3,2);
}