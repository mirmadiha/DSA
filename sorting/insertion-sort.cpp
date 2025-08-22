class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int size=nums.size();
        for(int i=1;i<size;i++){
            int j=i;
            while(j>0 && nums[j-1]>nums[j]){
                int temp=nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
                j--;
            }
        }
        return nums;
    }
};
