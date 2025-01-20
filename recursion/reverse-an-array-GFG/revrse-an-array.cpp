class Solution {
  public:
  
    void reverse(vector<int> &arr,int n , int i,int size){
        if(i>n/2){
            return;
        }
        swap(arr[i],arr[n-i]);
        reverse(arr,n,i+1,size);
    }
  
    void reverseArray(vector<int> &arr) {
        int size=arr.size();
        int n=size-1;
        int i=0;
        reverse(arr,n,i,size);
    }
};
