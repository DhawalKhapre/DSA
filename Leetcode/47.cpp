class Solution {
public:
    void solve(set<vector<int>> &s, vector<int> &nums, vector<int> temp)   {
        if(temp.size() == nums.size())  {
            s.insert(temp);
            return;
        }
        
        for(int i=0; i<nums.size(); i++)    {
            if(nums[i] != 11)   {
                int j = nums[i];
                nums[i] = 11;
                temp.push_back(j);
                solve(s, nums, temp);
                nums[i] = j;
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        solve(s, nums, {});
        
        for(auto it:s)
            ans.push_back(it);
        
        return ans;
    }
};