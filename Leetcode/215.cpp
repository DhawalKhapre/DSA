class Solution {
public:
    void merge(vector<int> &nums, int l, int m, int r)  {
        vector<int> lv;
        vector<int> rv;
        
        int nl = m-l+1, nr = r-m;
        
        for(int i=0; i<nl; i++)
            lv.push_back(nums[l+i]);
        for(int i=0; i<nr; i++)
            rv.push_back(nums[m+1+i]);
        
        int i=0, j=0, k=l;
        
        while(i<nl && j<nr) {
            if(lv[i] <= rv[j])  nums[k++] = lv[i++];
            else    nums[k++] = rv[j++];
        }
        
        while(i<nl)   {
            nums[k++] = lv[i++];
        }
        
        while(j<nr) {
            nums[k++] = rv[j++];
        }
    }
    
    void mergeSort(vector<int> &nums, int l, int r) {
        int m;
        if(l < r)   {
            m = (l+r)/2;
            mergeSort(nums, l, m);
            mergeSort(nums, m+1, r);
            merge(nums, l, m, r);
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        
        return nums[nums.size()-k];
    }
};