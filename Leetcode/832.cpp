class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = image.size();
        int col = image[0].size();
        int l=0, r=col-1;
        
        for(int i=0; i<row; i++)    {
            while(l<r)  {
                swap(image[i][l], image[i][r]);
                l++;
                r--;
            }
            l = 0;
            r = col-1;
        }
        
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                image[i][j] = image[i][j] ? 0 : 1;
        
        return image;
    }
};