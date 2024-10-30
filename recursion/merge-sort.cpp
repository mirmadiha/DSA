/*Write a program in C++ to merge sort an array using recursion*/
#include<iostream>
using namespace std;
void mergeArray(int arr[],int start,int end){
    int mid=start+(end-start)/2;
    int len1=mid-start+1;
    int len2=end-mid;

    int *array1=new int[len1];
    int *array2=new int[len2];

    int mainArrayIndex=start;
    for(int i=0;i<len1;i++){
        array1[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int j=0;j<len2;j++){
        array2[j]=arr[mainArrayIndex++];
    }
    //merge two sorted arrays 
    int index1=0;
    int index2=0;
    mainArrayIndex=start;

    while(index1<len1 && index2<len2){
        if(array1[index1]<array2[index2]){
            arr[mainArrayIndex++]=array1[index1++];
        }
        else{
            arr[mainArrayIndex++]=array2[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=array1[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=array2[index2++];
    }
}

void mergeSort(int arr[],int start,int end){
    if(start>=end){
        return ;
    }

    int midPoint=start+(end-start)/2;

    mergeSort(arr,start,midPoint);

    mergeSort(arr,midPoint+1,end);

    mergeArray(arr,start,end);

}
int main()
{
    int arr[5]={9,5,1,8,3};
    int start=0;
    int end=4;
    mergeSort(arr,start,end);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}