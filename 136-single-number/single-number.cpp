class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int target,count;
    int n = nums.size();
    for(int i=0;i<n;i++){
        target=nums[i];
        count=0;
         for(int j=0;j<n;j++){
            if(nums[j]==target)
             count++;
         }
        if(count==1)
       /// int a = nums[i];
        return nums[i];
    }   
   return -1;
    }
};