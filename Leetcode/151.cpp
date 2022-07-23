class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string res;
        stack<string> stk;
        
        for(int i=0; i<s.size(); i++)   {
            if(s[i] == ' ') {
                if(!res.empty())    {
                    stk.push(res);
                    res.clear();
                }
            }
            
            else
                res += s[i];
        }
        
        if(!res.empty())
            stk.push(res);
        
        while(!stk.empty()) {
            ans += stk.top() + ' ';
            stk.pop();
        }
        
        ans.pop_back();
        
        return ans;
    }
};