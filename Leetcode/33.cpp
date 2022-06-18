class Solution {
public:
    int binary(vector<int> nums, int low, int high, int target)    {
        int mid;
        while(low<=high)    {
            mid = (low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        if(nums[0]<nums[n-1])
            return binary(nums, 0, n-1, target);
        
        int low=0;
        int mid, high=n-1;
        while(low<high) {
            mid = (low+high)/2;
            if(nums[mid]>=nums[0])
                low = mid+1;
            else
                high = mid;
        }
        
        if(nums[low]==target)
            return low;
        else if(target>nums[low] && target<=nums[n-1])
            return binary(nums, low, n-1, target);
        else
            return binary(nums, 0, low-1, target);
    }
};