class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }

        sort(nums.begin(),nums.end());

        int n= nums.size();
        int longest = 1;
        int count = 0;
        int last_smaller = INT_MIN;

        for(int i=0;i<n;i++){
            
            if(nums[i]-1 == last_smaller){
                count ++;
                last_smaller = nums[i]; 
            }
            else if(nums[i]!=last_smaller){
                count = 1;
                last_smaller = nums[i];
            }
            longest = max(longest,count);
        }
        return longest;
    }
};