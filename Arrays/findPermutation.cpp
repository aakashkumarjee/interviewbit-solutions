#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> solve(string A, int B)
{
    vector<int> ans(B);
    ans[0] = 1;
    for (int i = 1; i < B; i++)
    {
        if (A[i - 1] == 'D')
        {
            ans[i] = ans[i - 1] - 1;
        }
        else
        {
            ans[i] = ans[i - 1] + 1;
        }
    }
    int min = INT_MAX;
    for (int i = 0; i < ans.size(); i++)
    {
        min = min > ans[i] ? ans[i] : min;
    }
    if (min < 1)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] = ans[i] + (1 - min);
        }
        return ans;
    }
}
int main()
{
    vector<int> A = solve("DI", 3);
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
