class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 1;
        int n = nums.size();
        vector<int> dp(n, 1);
        
        for(int i=1; i<n; i++)  {
            if(nums[i-1]<nums[i])
                dp[i] = dp[i-1]+1;
            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};