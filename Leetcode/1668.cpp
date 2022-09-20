class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans=0, i=0;
        int n = word.size();
        int m = sequence.size();
        
        while(i <= m-n)    {
            string res = sequence.substr(i, n);
            if(res == word) {
                ans++;
                i += n;
            }
            else
                i++;
        }
        
        return ans;
    }
};