class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n = changed.size();
        
        if(n%2 != 0)
            return ans;
        
        map<int, int> m;
        
        sort(changed.begin(), changed.end());
        
        for(auto it:changed)
            m[it]++;
        
        for(auto it:changed)    {
            if(m[it] == 0)
                continue;
            
            if(m[it*2] == 0)
                return {};
            
            ans.push_back(it);
            m[it]--;
            m[it*2]--;
        }
        
        return ans;
    }
};