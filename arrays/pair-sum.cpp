/*Write a program in C++ to find the pair sum */
#include<iostream>
using namespace std;
int main()
{
    int x=4;
    int arr[6]={2,4,0,2,3,1};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<"   "<<arr[j]<<endl;
            }
        }
    }
}