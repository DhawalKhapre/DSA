class Solution {
public:
    vector<int> findPattern(string pattern) {
        vector<int> res;
        int ind = 0;
        map<char, int> m;
        
        for(int i=0; i<pattern.size(); i++) {
            if(m.find(pattern[i]) == m.end())   {
                m.insert({pattern[i], ind++});
                res.push_back(m[pattern[i]]);
            }
            
            else
                res.push_back(m[pattern[i]]);
        }
        
        return res;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        
        vector<int> res = findPattern(pattern);
        
        for(int i=0; i<words.size(); i++)   {
            vector<int> word = findPattern(words[i]);
            
            if(res == word)
                ans.push_back(words[i]);
        }
        
        return ans;
    }
};