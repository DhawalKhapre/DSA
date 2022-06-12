class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l = 0, r = 0, sum = 0, ans = 0;
        unordered_map<int, int> m;
        
        while(r < nums.size())  {
            int rt = nums[r++];
            sum += rt;
            m[rt]++;
            
            while(m[rt] > 1)    {
                int lt = nums[l++];
                m[lt]--;
                sum -= lt;
            }
            
            ans = max(ans, sum);
        }
        
        return ans;
    }
};