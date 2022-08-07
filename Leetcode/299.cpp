class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0, cow = 0;
        string secret2, guess2, ans;
        for(int i=0; i<secret.size(); i++)  {
            if(secret[i]==guess[i])
                bull++;
            else    {
                secret2 += secret[i];
                guess2 += guess[i];
            }
        }
        
        int n = 10;
        vector<int> v(n, 0);
        
        for(auto it:guess2)
            v[it-'0']++;
        
        for(auto it:secret2)    {
            if(v[it-'0']!=0)    {
                cow++;
                v[it-'0']--;
            }
        }
        
        ans = to_string(bull) + 'A' + to_string(cow) + 'B';
        
        return ans;
    }
};