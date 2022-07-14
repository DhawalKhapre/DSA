class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> map;
        vector<vector<string>> ans;
        
        int anagram = 0;
        
        for(int i=0; i<strs.size(); i++)    {
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            if(map.find(sorted) == map.end())   {
                ans.push_back({strs[i]});
                map[sorted] = anagram;
                anagram++;
            }
            else
                ans[map[sorted]].push_back(strs[i]);
        }
        
        return ans;
    }
};