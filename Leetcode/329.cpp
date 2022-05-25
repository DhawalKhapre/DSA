class Solution {
public:
    bool isValid(int x, int y, int m, int n)    {
        return (x>=0 && y>=0 && x<m && y<n);
    }
    
    int search(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j, int m, int n)    {
        if(!isValid(i,j,m,n))return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int u=0, d=0, l=0, r=0;
        
        if(isValid(i-1,j,m,n) && matrix[i][j]<matrix[i-1][j])
            u = search(matrix, dp, i-1, j, m, n);
        
        if(isValid(i+1,j,m,n) && matrix[i][j]<matrix[i+1][j])
            d = search(matrix, dp, i+1, j, m, n);
        
        if(isValid(i,j-1,m,n) && matrix[i][j]<matrix[i][j-1])
            l = search(matrix, dp, i, j-1, m, n);
        
        if(isValid(i,j+1,m,n) && matrix[i][j]<matrix[i][j+1])
            r = search(matrix, dp, i, j+1, m, n);
        
        dp[i][j] = 1 + max(u, max(d, max(l, r)));
        
        return dp[i][j];
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int ans = INT_MIN;
        
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(dp[i][j]==-1)
                    ans = max(ans, search(matrix, dp, i, j, m, n));
        
        return ans;
    }
};