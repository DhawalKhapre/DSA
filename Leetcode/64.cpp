class Solution {
public:
    int solve(vector<vector<int>> &grid, vector<vector<int>> &dp, int i, int j) {
        if(i==0 && j==0)    return grid[0][0];
        if(i<0 || j<0)  return 1e9;
        if(dp[i][j] != -1)  return dp[i][j];
        
        int u = grid[i][j] + solve(grid, dp, i-1, j);
        int l = grid[i][j] + solve(grid, dp, i, j-1);
        
        return dp[i][j] = min(u, l);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> dp(m, vector<int>(n, -1));
        int ans = solve(grid, dp, m-1, n-1);
        
        return ans;
    }
};