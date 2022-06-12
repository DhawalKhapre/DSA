class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(auto it:nums)   sum += it;
        sum -= x;
        
        int l = 0, r = 0, ans = -1;
        
        if(sum==0)  return nums.size();
        else if(sum<0)  return -1;
        
        int curr = nums[0];
        
        while(r < nums.size())  {
            if(curr < sum)  {
                r++;
                curr += nums[r];
            }
            
            else if(curr > sum) {
                curr -= nums[l];
                l++;
            }
            
            else if(curr = sum) {
                int len = r-l+1;
                ans = max(ans, len);
                curr -= nums[l];
                l++;
            }
        }
        
        return ans==-1 ? -1 : nums.size()-ans;
    }
};