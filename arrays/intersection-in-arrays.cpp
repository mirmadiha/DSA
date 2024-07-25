/*Write a program in C++ to find the duplicate elements in the array*/
#include<iostream>
using namespace std;
int main()
{
  int arr[]={2,3,7,5,8};
  int arr2[]={4,9,2,8,8,8};
  cout<<"The intersection of the two arrays is:"<<endl;
  for(int i=0;i<5;i++){
    for(int j=0;j<6;j++){
        if(arr[i]==arr2[j]){
            cout<<arr[i]<<"  ";
            arr[j]=-1234;
            break;
        }
        }
    }
    }
  