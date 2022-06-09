class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        
        int i=0, j=numbers.size()-1;
        
        while(i<j)  {
            int k = numbers[i]+numbers[j];
            
            if(k==target)   {
                return {i+1, j+1};
            }
            
            else if(k<target)   i++;
            else    j--;
        }
        return {-1};
    }
};