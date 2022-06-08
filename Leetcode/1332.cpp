class Solution {
public:
    int removePalindromeSub(string s) {
        int f=0, l=s.size()-1;
        
        while(f<l)  {
            if(s[f]!=s[l])  return 2;
            f++, l--;
        }
        
        return 1;
    }
};