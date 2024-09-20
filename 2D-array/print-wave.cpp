/*Write a program in C++ to print a 2D array like a wave*/
#include<iostream>
using namespace std;
void printWave(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i];
                cout<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i];
                cout<<" ";
            }
        }
    }
}
int main()
{
    int m;
    cout<<"Enter the numnber of rows:"<<" ";
    cin>>m;
    int arr[m][3];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    printWave(arr,m,3);
}