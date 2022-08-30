class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string ans;
        map<string, string> m;
        vector<string> sentences;
        
        string res;
        for(int i=0; i<sentence.size(); i++)    {
            if(sentence[i]==' ')    {
                sentences.push_back(res);
                res.clear();
            }
            
            else
                res += sentence[i];
        }
        sentences.push_back(res);
        
        for(int i=0; i<dictionary.size(); i++)  {
            int n = dictionary[i].size();
            for(int j=0; j<sentences.size(); j++)   {
                if(sentences[j].size() < n)
                    continue;
                
                if(m.find(sentences[j]) != m.end()) {
                    if(n < m[sentences[j]].size() && sentences[j].substr(0,n) == dictionary[i])
                        m[sentences[j]] = dictionary[i];
                    continue;
                }
                
                if(sentences[j].substr(0,n) == dictionary[i])
                    m.insert({sentences[j], dictionary[i]});
            }
        }
        
        for(int i=0; i<sentences.size(); i++)   {
            if(m.find(sentences[i]) == m.end())
                ans += sentences[i];
            else
                ans += m[sentences[i]];
            ans += ' ';
        }
        ans.pop_back();
        
        return ans;
    }
};