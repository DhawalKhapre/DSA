class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int, string> m;
        string str;
        int i = 0;
        int j = i;

        while(i<s.size() && j<s.size())   {
            size_t pos = str.find(s[j]);
            if(pos == string::npos)   str += s[j++];

            else    {
                m.insert({str.size(), str});
                str.clear();
                i++;
                j = i;
            }
        }

        m.insert({str.size(), str});

        auto it = m.end();
        it--;

        return it->first;
    }
};