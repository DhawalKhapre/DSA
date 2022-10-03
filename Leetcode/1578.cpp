class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        int n = colors.size();
        int sum = neededTime[0];
        int mEle = neededTime[0];

        for(int i=1; i<n; i++)  {
            if(colors[i] == colors[i-1])    {
                sum += neededTime[i];
                mEle = max(mEle, neededTime[i]);
            }
            
            else    {
                ans += (sum - mEle);
                sum = neededTime[i];
                mEle = neededTime[i];
            }
        }
            
        ans += (sum-mEle);

        return ans;
    }
};