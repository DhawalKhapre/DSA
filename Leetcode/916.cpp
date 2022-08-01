class Solution {
public:
    vector<int> freqCount(string s) {
        vector<int> freq(26, 0);
        
        for(auto it:s)
            freq[it-'a']++;
        
        return freq;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> maxF(26, 0);
        
        for(auto it:words2) {
            vector<int> freq = freqCount(it);
            for(int i=0; i<26; i++)
                maxF[i] = max(maxF[i], freq[i]);
        }
        
        for(auto it:words1) {
            vector<int> freq = freqCount(it);
            bool res = true;
            
            for(int i=0; i<26; i++) {
                if(freq[i] < maxF[i])   {
                    res = false;
                    break;
                }
            }
            if(res)
                ans.push_back(it);
        }
        
        return ans;
    }
};