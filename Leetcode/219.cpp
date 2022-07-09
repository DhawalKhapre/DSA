class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        map<int, int> m;
        for(int i=0; i<n; i++)
            m[nums[i]]++;

        int l=0, r=n-1;

        while(l<n-1)  {
            while(l<r && m[nums[l]]>1)  {
                if(nums[l] == nums[r] && r-l <= k)
                    return true;
                r--;
            }
            l++;
            r = n-1;
        }

        return false;
    }
};