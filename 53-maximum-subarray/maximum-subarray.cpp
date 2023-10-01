class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n = nums.size();
        int res = INT_MIN;
        int curr = 0;

        for(int i=0;i<n;i++){
            curr += nums[i];
            if(nums[i]>curr){
                curr = nums[i];
            }
            res = max(curr,res);
        }
        return res;
    }
};  