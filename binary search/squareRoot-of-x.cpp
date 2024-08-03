/*Write a program in C++ to find the square root of x*/
#include<iostream>
using namespace std;

long long int binarySearch(int x){
    int start=0;
    int end=x;
    long long int midPoint=start+(end-start)/2;
    long long int ans=-1;

while(start<=end){
    long long int square=midPoint*midPoint;

    if(square==x){
        return midPoint;
    }
    else if(square>x){
        end=midPoint-1;
    }
    else{
        ans = midPoint;
        start=midPoint+1;
    }
    midPoint=start+(end-start)/2;
}
return ans;
}

int main()
{
    int x;
    cout<<"Enter the number ="<<" ";
    cin>>x;
    int result=binarySearch(x);
    cout<<"The square root of "<<x<<" = "<< result;
}