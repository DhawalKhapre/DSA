class Solution {
public:
    bool isVowel(char i)    {
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U')
            return true;
        
        else
            return false;
    }
    
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0;
        int r = n-1;
        
        while(l<r)  {
            while(l<r && !isVowel(s[l]))
                l++;
            while(l<r && !isVowel(s[r]))
                r--;
            
            if(l<r)
                swap(s[l++], s[r--]);
        }
        
        return s;
    }
};