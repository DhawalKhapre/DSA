class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp = nums;
        for(int i=0; i<nums.size(); i++)
            temp[(i+k)%n] = nums[i];
        
        nums = temp;
    }
};