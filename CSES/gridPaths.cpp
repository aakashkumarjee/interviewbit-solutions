#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll traverse(vector<vector<int>> &grid, int r, int c, string &s, int si)
{
    if (si == s.size())
        return 0;
    if (r == 6 && c == 0)
        return 1;
    grid[r][c] = -1;
    ll l = 0, d = 0, rt = 0, u = 0;
    if (c - 1 >= 0 && grid[r][c - 1] != -1)
    {
        l = traverse(grid, r, c - 1, s, si + 1);
    }
    if (c + 1 < 7 && grid[r][c + 1] != -1)
    {
        rt = traverse(grid, r, c + 1, s, si + 1);
    }
    if (r - 1 <= 0 && grid[r - 1][c] != -1)
    {
        u = traverse(grid, r - 1, c, s, si + 1);
    }
    if (r + 1 < 7 && grid[r + 1][c] != -1)
    {
        d = traverse(grid, r + 1, c, s, si + 1);
    }

    if (s[si] == '?')
    {
        return l + rt + u + d;
    }
    else
    {
        switch (s[si])
        {
        case 'D':
            return d;
        case 'U':
            return u;
        case 'R':
            return rt;
        case 'L':
            return l;
        default:
            return 0;
        }
    }
    return 0;
}
int main()
{
    string s;
    cin >> s;
    vector<vector<int>> grid(7, vector<int>(7));
    ll res = traverse(grid, 0, 0, s, 0);
    return 0;
}
