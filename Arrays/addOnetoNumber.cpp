#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> solve(vector<int> &A)
{
    vector<int> ans;
    reverse(A.begin(), A.end());
    int cr = 1;
    for (int i = 0; i < A.size(); i++)
    {
        int tmp = A[i] + cr;
        ans.push_back(tmp % 10);
        cr = tmp / 10;
    }
    while (cr)
    {
        int tmp = cr % 10;
        ans.push_back(tmp);
        cr = cr / 10;
    }
    while (1)
    {
        if (ans[ans.size() - 1] == 0)
        {
            ans.pop_back();
        }
        else
        {
            break;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> A = {0, 3, 7, 6, 4, 0, 5, 5, 5};
    vector<int> B = solve(A);
    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i];
    }
    return 0;
}
