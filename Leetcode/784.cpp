class Solution {
public:
    char cCase(char c)  {
        return islower(c) ? toupper(c) : tolower(c);
    }
    
    void solve(string s, vector<string>& ans, int pos)  {
        ans.push_back(s);
        
        for(int i=pos; i<s.size(); i++)   {
            if(isalpha(s[i]))   {
                s[i] = cCase(s[i]);
                solve(s, ans, i+1);
                s[i] = cCase(s[i]);
            }
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        
        solve(s, ans, 0);
        
        return ans;
    }
};