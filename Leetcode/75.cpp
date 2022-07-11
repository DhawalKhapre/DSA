class Solution {
public:
    void sortColors(vector<int>& v) {
        int s0=0, s1=0, s2=0;
        int i;
        
        for(i=0; i<v.size(); i++)   {
            if(v[i]==0)
                s0++;
            else if(v[i]==1)
                s1++;
            else
                s2++;
        }
        
        for(i=0; i<v.size(); i++)
            v[i] = s0-- > 0 ? 0 : s1-- > 0 ? 1 : 2;
    }
};