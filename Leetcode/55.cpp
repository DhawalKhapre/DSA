class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        
        for(int i=0; i<n; i++)  {
            if(idx < i)return false;
            
            idx = max(idx, nums[i]+i);
        }
        
        return true;
    }
};