class Solution {
public:
    map<vector<int>, int> m;
    
    void genSubs(vector<int> &nums, vector<int> &curr, int len, int start)  {
        if(curr.size()==len)    {
            m.insert({curr, 1});
            return;
        }
        
        for(int i=start; i<nums.size(); i++)    {
            curr.push_back(nums[i]);
            genSubs(nums, curr, len, i+1);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<=nums.size(); i++)
            genSubs(nums, curr, i, 0);
        
        for(auto it:m)
            ans.push_back(it.first);
        
        return ans;
    }
};