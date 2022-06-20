class Solution {
public:
    static bool cmp(string s1, string s2)  {
        return (s1.size() > s2.size());
    }
    
    int minimumLengthEncoding(vector<string>& words) {
        string ans;
        
        sort(words.begin(), words.end(), cmp);
        
        for(auto s:words)   {
            if(ans.find(s+'#') == string::npos)
                ans += s + '#';
        }
        
        return ans.size();
    }
};