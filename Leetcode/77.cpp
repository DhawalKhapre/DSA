class Solution {
public:
    void comb(vector<vector<int>> &ans, vector<int> &temp, int pos, int n, int k)    {
        if(temp.size() == k)    {
            ans.push_back(temp);
            return;
        }
        
        for(int i=pos; i<=n; i++)   {
            temp.push_back(i);
            comb(ans, temp, i+1, n, k);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        comb(ans, temp, 1, n, k);
        
        return ans;
    }
};