class Solution {
public:
    vector<int> initial;
    
    Solution(vector<int>& nums) {
        initial = nums;
    }
    
    vector<int> reset() {
        return initial;
    }
    
    vector<int> shuffle() {
        vector<int> temp(initial.begin(), initial.end());
        for(int i=0; i<initial.size(); i++) {
            int idx = rand() % initial.size();
            swap(temp[i], temp[idx]);
        }
        
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */