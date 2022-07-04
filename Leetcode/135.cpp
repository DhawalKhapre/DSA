class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int candy = n;
        int i = 1;
        
        while(i<n)  {
            if(ratings[i] == ratings[i-1])  {
                i++;
                continue;
            }
            
            int p = 0;
            while(i<n && ratings[i]>ratings[i-1])   {
                p++;
                candy += p;
                i++;
            }
            
            int v = 0;
            while(i<n && ratings[i]<ratings[i-1])   {
                v++;
                candy += v;
                i++;
            }
            
            candy -= min(p, v);
        }
        
        return candy;
    }
};