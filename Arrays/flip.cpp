#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> solve(string A)
{
    int n = A.size();
    int l = 0, r = 0, ltemp = 0;
    int count = 0;
    int fcount = 0;
    vector<int> ans;
    if (n == 0)
        return ans;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == '0')
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count < 0)
        {
            count = 0;
            ltemp = i + 1;
        }
        if (count > fcount)
        {
            l = ltemp;
            r = i;
            fcount = count;
        }
    }
    if (l == r && fcount == 0)
        return ans;
    ans.push_back(l + 1);
    ans.push_back(r + 1);
    return ans;
}
int main()
{
    string A = "0111000100010";
    vector<int> ans = solve(A);
    if (ans.size() != 0)
    {
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
