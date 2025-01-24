class Solution {
  public:
    bool isSorted(vector<int>& arr,int size,int index){
        if(index==0){
            return true;
        }
        
        if(arr[index]<arr[index-1]){
            return false;
        }
        
        isSorted(arr,size,index-1);
    }
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        int size=arr.size();
        int index=size-1;
        return isSorted(arr,size,index);
    }
};
