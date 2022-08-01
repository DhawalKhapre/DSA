class Solution {
public:
    bool poss(int r, int c, int n, vector<string>& res) {
        for(int i=0; i<r; i++)
            if(res[i][c]=='Q')
                return false;
        
        for(int i=r-1,j=c+1; i>=0&&j<n; i--,j++)
            if(res[i][j]=='Q')
                return false;
        
        for(int i=r-1,j=c-1; i>=0&&j>=0; i--,j--)
            if(res[i][j]=='Q')
                return false;
        
        return true;
    }
    
    void solve(int l, int n, vector<string>& res, vector<vector<string>>& ans) {
        if(l == n)  {
            ans.push_back(res);
            return;
        }
        
        for(int i=0; i<n; i++)  {
            if(poss(l, i, n, res))    {
                res[l][i] = 'Q';
                solve(l+1, n, res, ans);
                res[l][i] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> res(n, string(n,'.'));
        
        solve(0, n, res, ans);
        
        return ans;
    }
};