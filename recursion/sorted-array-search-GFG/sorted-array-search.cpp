class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    
    bool searchKey(int start , int end , vector<int>& arr ,int k){
        
        int mid=start+(end-start)/2;
        
        if(start>end){
            return false;
        }
        
        if(arr[mid]==k){
            return true;
        }
        
        if(arr[mid]>k){
            searchKey(start,mid-1,arr,k);
        }
        
        else{
            searchKey(mid+1,end,arr,k);
        }
    }
    
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int size=arr.size();
        int start=0;
        int end=size-1;
        return searchKey(start,end,arr,k);
    }
};
