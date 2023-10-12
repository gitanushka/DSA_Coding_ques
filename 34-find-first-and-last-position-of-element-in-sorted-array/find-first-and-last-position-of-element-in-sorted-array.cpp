class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       return {search(nums,target,"First"),search(nums,target,"Second")};
    }
    int search(vector<int>& nums, int target,string find){
        int start = 0, end = nums.size()-1,ans=-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>target){
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                ans = mid;
                if(find!="First"){
                    start = mid+1;
                }
                else{
                    end = mid -1;
                }
            }
        }
        return ans;
    }
};