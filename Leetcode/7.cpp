class Solution {
public:
    int reverse(int x) {
        const int maxLim = 214748364;
        
        bool neg = (x<0) ? true : false;
        unsigned int num = 0;
        unsigned int revnum = 0;
        char digitOne = -1;
        char counter = 0;
        
        if(neg)
            num = (unsigned int)(0u-x);
        else
            num = (unsigned int)(x);
        
        while(num!=0)   {
            char digit = (char)(num%10);
            num = num/10;
            
            counter++;
            if(digitOne==-1)
                digitOne = digit;
            
            if(counter>9)   {
                if(digitOne>2)
                    return 0;
                else if(revnum>maxLim)
                    return 0;
                else if ((revnum == maxLim) && neg && (digit > 8))
                    return 0;
                else if ((revnum == maxLim) && neg && (digit > 7))
                    return 0;
            }
            revnum = (unsigned int)((revnum*10)+digit);
        }
        
        return (neg) ? -revnum : revnum;
    }
};