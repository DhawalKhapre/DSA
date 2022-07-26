class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=0; i<numRows; i++)    {
            vector<int> res;
            res.push_back(1);
            for(int j=0; j<i-1; j++)
                res.push_back(ans[i-1][j] + ans[i-1][j+1]);
            if(i!=0)
                res.push_back(1);
            
            ans.push_back(res);
        }
        
        return ans;
    }
};