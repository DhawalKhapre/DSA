#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(long long p, long long q) {
    vector<long long> v;
    
    for(long long i=p; i<=q; i++) {
        if(i==1)    {
            cout<<"1"<<" ";
            v.push_back(i);
            continue;
        }
        
        if(i==2 || i==3)
            continue;
        
        string num = to_string(i);
        int d = num.size();
        string sNum = to_string(i*i);
        int sD = sNum.size();
        
        string l = sNum.substr(0, sD-d);
        string r = sNum.substr(sD-d, d);
        
        int lNum = stoi(l);
        int rNum = stoi(r);
        
        if(lNum+rNum == i)  {
            v.push_back(i);
            cout<<i<<" ";
        }
    }
    
    if(v.empty())
        cout<<"INVALID RANGE";
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
