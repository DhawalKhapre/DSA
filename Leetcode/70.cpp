class Solution {
public:
    int dp[46];
    
    Solution()  {
        memset(dp, -1, sizeof(dp));
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
    }
    
    int climbStairs(int n) {
        if(dp[n] == -1)
            dp[n] = climbStairs(n-1) + climbStairs(n-2);
        
        return dp[n];
    }
};