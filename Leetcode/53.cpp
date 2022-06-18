class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> sum(nums.size());
        
        sum[0] = nums[0];
        int ans = nums[0];
        
        for(int i=1; i<nums.size(); i++)    {
            sum[i] = max(nums[i], nums[i]+sum[i-1]);
            ans = max(ans, sum[i]);
        }
        
        return ans;
    }
};