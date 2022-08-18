class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int n = s.size();
        
        for(int j=0; j<t.size(); j++)   {
            if(s[i] == t[j])
                i++;
            if(i == n)
                return true;
        }
        
        return i==n ? true : false;
    }
};