/*Write a program in C++ to reverse an array*/
#include<iostream>
using namespace std;

int rev(int arr[],int size){
    int temp;
    if(size%2==0){
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    }
      if(size%2!=0){
    for(int i=0;i<size;i++){
        if(arr[i]==arr[size-1-i]){
            break;
        }
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:"<<" ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index "<<i<<" ="<<" ";
        cin>>arr[i];
    }
    cout<<"The reversed array is:"<<endl;
    int result=rev(arr,n);

}