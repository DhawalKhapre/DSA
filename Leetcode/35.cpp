class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        set<int> s;
        
        for(int x:nums)
            s.insert(x);
        
        s.insert(target);
        
        int index = 0;
        
        for(int y:s)   {
            if(y==target)
                return index;
            index++;
        }
        return -1;
    }
};