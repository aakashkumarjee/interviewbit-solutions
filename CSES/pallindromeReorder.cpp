#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    vector<int> freq(26);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'A']++;
    }
    int oneCnt = 0;
    char el = '&';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1 || freq[i] & 1)
        {
            oneCnt++;
            el = 'A' + i;
        }
    }
    if (oneCnt > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i] / 2; j++)
        {
            ans.push_back('A' + i);
        }
    }
    string res = ans;
    if (el != '&')
    {
        res += el;
    }
    reverse(ans.begin(), ans.end());
    res += ans;
    cout << res << endl;
    return 0;
}
