/*Write a program in C++ to swap 0's and 1's in the array*/
#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"   ";
    }
}


void sortone(int arr[],int n){
    int left=0;
    int right =n-1;
    while(left<right){
    while(arr[left]==0 && left<right){
        left++;
    }
    while(arr[right]==1 && left<right){
        right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[8]={0,0,1,1,0,1,0,1};
    sortone(arr,8);
    cout<<endl;
    printarray(arr,8);

}

    