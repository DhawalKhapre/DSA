class Solution {
public:
    void genSubsets(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr, int len, int start) {
        if(curr.size() == len)  {
            ans.push_back(curr);
            return;
        }
        
        for(int i=start; i<nums.size(); i++)    {
            curr.push_back(nums[i]);
            genSubsets(nums, ans, curr, len, i+1);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<=nums.size(); i++)
            genSubsets(nums, ans, curr, i, 0);
        
        return ans;
    }
};