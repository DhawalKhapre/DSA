class Solution {
public:
    int getSum(int a, int b) {
        int ans = 0;
        if(a<0) {
            while(a++)
                ans -= 1;
        }
        else    {
            while(a--)
                ans += 1;
        }
        
        if(b<0) {
            while(b++)
                ans -= 1;
        }
        else    {
            while(b--)
                ans += 1;
        }
        
        return ans;
    }
};