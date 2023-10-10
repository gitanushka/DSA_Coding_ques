class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0, count = 0;
        int n = nums.size();

        for(int i =0 ; i<n; i++){
        sum += nums[i];
        if(sum==k) count++;
        if(mp.find(sum-k)!=mp.end()){
            count = mp[sum-k] + count;
        }
        mp[sum]++;
    }
        return count;
    }
};