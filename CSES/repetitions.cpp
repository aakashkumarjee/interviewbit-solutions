#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    char tl = 'A';
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        //cout << s[i] << " " << tl << " " << i << " " << cnt << " " << endl;
        if (s[i] == tl)
        {
            cnt++;
            res = max(cnt, res);
        }
        else
        {
            tl = s[i];
            cnt = 1;
        }
    }
    cout << res;
    return 0;
}
