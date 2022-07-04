class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> pairs;
        unordered_set<char> check;
        
        for(int i=0; i<s.size(); i++)   {
            if(pairs.count(s[i]))   {
                if(pairs[s[i]] != t[i])
                    return false;
            }
            
            else    {
                if(check.count(t[i]))
                    return false;
                pairs[s[i]] = t[i];
                check.emplace(t[i]);
            }
        }
        
        return true;
    }
};