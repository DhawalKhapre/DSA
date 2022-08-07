class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        
        for(auto it:magazine)
            m[it]++;
        
        for(auto it:ransomNote)   {
            if(m[it]==0)
                return false;
            m[it]--;
        }
        
        return true;
    }
};