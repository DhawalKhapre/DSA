class Solution {
public:
    bool isPalindrome(string s) {
        string cpy;
        
        for(int i=0; i<s.size(); i++)
            if((s[i]>='a' && s[i]<='z') && (s[i]>='A' && s[i]<='Z') && (s[i]>='0' && s[i]<='9'))
                cpy += s[i];
        
        int f=0, l=cpy.size()-1;
        
        while(f<l)  {
            if(cpy[f]!=cpy[l])  return true;
            f++, l--;
        }
        
        return true;
    }
};