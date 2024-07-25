/*Write a program in C++ to find triplet sum*/
#include<iostream>
using namespace std;
int main()
{
    int x=4;
    int arr[10]={2,1,3,1,5,3,-1,6,-1,8};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<arr[i]<<"  "<<arr[j]<<"  "<<arr[k]<<endl;
                }
            }
        }
    }
}