class Solution {
public:
    int substr(string s1, string s2, int m, int n) {
        int dp[m+1][n+1];
        
        for(int i=0; i<=m; i++)
            for(int j=0; j<=n; j++)
                if(i==0 || j==0)    dp[i][j] = 0;
        
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                if(s1[i-1]==s2[j-1])    dp[i][j] = 1 + dp[i-1][j-1];
                else    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        
        return dp[m][n];
    }
    
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        
        return m+n-2*substr(word1, word2, m, n);
    }
};