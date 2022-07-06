class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)    return 0;
        sort(nums.begin(), nums.end());
        
        int maxL=0, currL=1;
        
        for(int i=1; i<nums.size(); i++)    {
            if(nums[i] == nums[i-1]+1)
                currL++;
            else if(nums[i] != nums[i-1])    {
                maxL = max(maxL, currL);
                currL = 1;
            }
        }
        
        return max(maxL, currL);
    }
};