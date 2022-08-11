class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(auto it:nums)
            m[it]++;
        
        for(auto it:m)  {
            if(it.second > nums.size()/2)
                return it.first;
        }
        
        return -1;
    }
};