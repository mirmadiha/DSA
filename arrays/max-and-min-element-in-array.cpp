/*Write a program in C++ to find the maximum and minimum value in an array*/
#include<iostream>
#include<limits.h>
using namespace std;
int get_max(int arr[],int size){
    int max = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum value is:"<<max<<endl;
}

int get_min(int arr[],int size){
    int min = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minimum value is:"<<min<<endl;
}
int main(){
    int num[100]={9,18,-3,0,55,4};
    get_min(num,6);
    get_max(num,6);

}