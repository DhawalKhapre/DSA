#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    string ans = "";
    
    int i = 0, j = 0;
    while (s[i])
    {
        if (s[i] != ' ')
           s[j++] = s[i];
        i++;
    }
    s[j] = '\0';
    
    int schar = 0;
    int m = floor(sqrt(s.size()));
    int n = m;
    
    while(m*n < s.size())   {
        if(m<n) m++;
        else    n++;
    }
    
    int c = (m*n) - s.size();
    vector<vector<char>> res(m, vector<char> (n, 'x'));
    
    for(i=0; i<m; i++)  {
        if(i == m-1)    {
            for(j=0; j<n-c; j++)
                res[i][j] = s[schar++];
        }
        else    {
            for(j=0; j<n; j++)
                res[i][j] = s[schar++];
        }
    }
    
    for(i=0; i<n; i++)  {
        if(i<n-c)   {
            for(j=0; j<m; j++)
                ans += res[j][i];
        }
        else    {
            for(j=0; j<m-1; j++)
                ans += res[j][i];
        }
        ans += ' ';
    }
    
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
