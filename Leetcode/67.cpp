class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int al = a.size()-1;
        int bl = b.size()-1;
        int sum, carry=0;
        
        while(al>=0 || bl>=0)   {
            sum = carry;
            
            if(al>=0)   sum += a[al--]-'0';
            if(bl>=0)   sum += b[bl--]-'0';
            
            carry = sum>1 ? 1 : 0;
            ans += to_string(sum%2);
        }
        
        if(carry>0) ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};