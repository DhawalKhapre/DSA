class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++)
            if(nums[i]%2 == 0)
                sum += nums[i];
        
        for(int i=0; i<queries.size(); i++) {
            int idx = queries[i][1];
            
            if(queries[i][0]%2!=0 && nums[idx]%2!=0)
                sum += queries[i][0]+nums[idx];
            else if(queries[i][0]%2!=0 && nums[idx]%2==0)
                sum -= nums[idx];
            else if(queries[i][0]%2==0 && nums[idx]%2==0)
                sum += queries[i][0];
            
            nums[idx] += queries[i][0];
            ans.push_back(sum);
        }
        
        return ans;
    }
};