int longestValidParentheses(string s) {
    if(s.size()==0)return 0;
        
    stack<int> stk;
    stk.push(-1);
    
    int ans = 0;
    
    for(int i=0; i<s.size(); i++)   {
        if(s[i] == '(')stk.push(i);
        
        else    {
            stk.pop();
            
            if(stk.empty())stk.push(i);
            else    ans = max(ans, i-stk.top());
        }
    }
    
    return ans;
}