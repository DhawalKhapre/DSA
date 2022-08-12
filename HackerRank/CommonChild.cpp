#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'commonChild' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int commonChild(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    
    vector<vector<int>> dp(n1+1, vector<int>(n2+1, -1));
    
    for(int i=0; i<=n1; i++)
        dp[i][0] = 0;
    for(int i=0; i<=n2; i++)
        dp[0][i] = 0;
        
    for(int i=1; i<=n1; i++)    {
        for(int j=1; j<=n2; j++)    {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return dp[n1][n2];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
