class Solution {
public:
    int addDigits(int num) {
        while(num/10 > 0)   {
            string n = to_string(num);
            num = 0;
            
            for(int i=0; i<n.size(); i++)
                num += n[i]-'0';
        }
        
        return num;
    }
};