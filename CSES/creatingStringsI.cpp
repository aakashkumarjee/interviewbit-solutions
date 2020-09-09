#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(string s, map<char, int> m, int n, string ans)
{
    if (ans.size() == n)
    {
        cout << ans << endl;
        return;
    }
    for (auto at : m)
    {
        if (at.second == n - ans.size())
        {
            int s = at.second;
            while (s--)
            {
                ans += at.first;
            }
            cout << ans << endl;
            return;
        }
        if (at.second != 0)
        {
            ans += at.first;
            m[at.first]--;
            solve(s, m, n, ans);
            m[at.first]++;
        }
    }
}
int main()
{
    string s;
    cin >> s;
    // string ans;
    // map<char, int> m;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     m[s[i]]++;
    // }
    // for (auto nd : m)
    // {
    //     cout << nd.first << " " << nd.second << endl;
    // }
    // solve(s, m, s.size(), ans);
    vector<string> ans;
    sort(s.begin(), s.end());
    do
    {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << ans.size() << endl;
    for (auto s : ans)
    {
        cout << s << endl;
    }
    return 0;
}
