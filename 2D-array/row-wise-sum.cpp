/*Write a program in C++ to find the row wise sum of a 2D array*/
#include<iostream>
using namespace std;
void rowSum(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of row"<<i<<"="<<sum<<endl;
    }
}
int main()
{
    int arr[3][4];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    rowSum(arr,3,4);
}