class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        sort(products.begin(), products.end());
        int l=0, r=products.size()-1;
        
        for(int i=0; i<searchWord.size(); i++)  {
            char c = searchWord[i];
            vector<string> res;
            
            while(l<=r && products[l][i]!=c)    l++;
            while(l<=r && products[r][i]!=c)    r--;
            
            for(int j=l; j < l+min(3,r-l+1); j++)
                res.push_back(products[j]);
            
            ans.push_back(res);
        }
        
        return ans;
    }
};