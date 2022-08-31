class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        map<char, int> m;
        
        for(auto it:stones)
            m[it]++;
        
        for(auto it:jewels)
            if(m.find(it) != m.end())
                ans += m[it];
        
        return ans;
    }
};