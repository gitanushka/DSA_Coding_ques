class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        //sort krlo taaki saare consecutive saath me aa jaaye
        sort(nums.begin(),nums.end());

        int n= nums.size();
        //longest atleast 1 no. to rhega since if we pick one isiliye 1 liya
        int longest = 1;
        int count = 0;
        //last smaller jisse ahm check krenge ki aage aane wale no. kya consecutive aare h use int min le liya
        int last_smaller = INT_MIN;
         //array kko traverse kiya
        for(int i=0;i<n;i++){
            //agr current no. se ek no. kam last smaller h mtlb consecutive mil gya h to count badhado or last smaller ko upadate kkre curent krdo
            if(nums[i]-1 == last_smaller){
                count ++;
                last_smaller = nums[i]; 
            }
            //agr aisa nhi h or current last smaller nhi h to fresh start krenge firse count 1 kro or last smaller ko current banado
            else if(nums[i]!=last_smaller){
                count = 1;
                last_smaller = nums[i];
            }
            //max longest jo aaya use return krwado
            longest = max(longest,count);
        }
        return longest;
    }
};