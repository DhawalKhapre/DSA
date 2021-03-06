class Solution {
public:
    void tp(vector<vector<int>>& matrix, int n)    {
        for(int i=0; i<n; i++)  {
            for(int j=i+1; j<n; j++)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    void swapCol(vector<vector<int>>& matrix, int n)    {
        for(int i=0; i<n; i++)  {
            int l=0, r=n-1;
            while(l<r)  {
                swap(matrix[i][l], matrix[i][r]);
                l++;
                r--;
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        tp(matrix, n);
        swapCol(matrix, n);
    }
};