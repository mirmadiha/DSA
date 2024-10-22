/*Write a program in C++ to find the sum of array using recursion*/
#include<iostream>
using namespace std;
int arraySum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    
    int sum=arr[0];
    sum+=arraySum(arr+1,size-1);
    return sum;
}
int main()
{
    int arr[20];
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    if(n>20){
        cout<<endl<<"WARNING!"<<endl<<"You exceeded the input limit!";
    }
    else{
        cout<<endl<<"Enter the elements in the array:";
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=arraySum(arr,n);
    cout<<endl<<"The sum of the elements is: "<<result;
    }
    return 0;
}