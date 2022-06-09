class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)return 1;
        
        int k=0, i=0;
        nums[k++] = nums[i];
        
        for(i=1; i<nums.size(); i++)
            if(nums[i]!=nums[i-1])  nums[k++]=nums[i];
        
        return k;
    }
};