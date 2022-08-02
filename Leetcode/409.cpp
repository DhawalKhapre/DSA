class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        map<char, int> m;
        int maxOdd = 0;
        
        for(auto it:s)
            m[it]++;
        
        for(auto it:m)  {
            int count = it.second;
            if(count%2 == 0)
                ans += count;
            else    {
                ans += (count/2)*2;
                maxOdd = max(maxOdd, count);
            }
        }
        if(maxOdd>0)
            ans++;
        
        return ans;
    }
};