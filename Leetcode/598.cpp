class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)
            return m*n;
        
        int minM = ops[0][0];
        int minN = ops[0][1];
        
        for(int i=0; i<ops.size(); i++) {
            minM = min(minM, ops[i][0]);
            minN = min(minN, ops[i][1]);
        }
        
        return minM*minN;
    }
};