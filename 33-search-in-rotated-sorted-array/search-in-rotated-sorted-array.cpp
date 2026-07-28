class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0;int end= nums.size() -1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==nums[mid]){
                return mid;
            }
            //2nd case    1st half sorted
            else if(nums[mid]>=nums[st]){
                if(nums[st]<=target && target< nums[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
//2nd hald sorted
            else{
                if(nums[mid]<target && target<=nums[end]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }

            }
        }
        return -1;
    }
};