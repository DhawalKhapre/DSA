class Solution {
public:
    void solve(vector<int> &nums, int s, vector<vector<int>> &ans)  {
        if(s==nums.size())  {
            ans.push_back(nums);
            return;
        }
        
        for(int i=s; i<nums.size(); i++)    {
            swap(nums[i], nums[s]);
            solve(nums, s+1, ans);
            swap(nums[i], nums[s]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        solve(nums, 0, ans);
        
        return ans;
    }
};