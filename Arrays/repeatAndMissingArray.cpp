#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A)
{
    vector<int> isPresent(A.size() + 1, 0);
    for (int i = 0; i < A.size(); i++)
    {
        isPresent[A[i]]++;
    }
    int a, b;
    for (int i = 1; i < A.size() + 1; i++)
    {
        if (isPresent[i] == 0)
            a = i;
        if (isPresent[i] == 2)
            b = i;
    }
    vector<int> ans;
    ans.push_back(b);
    ans.push_back(a);
    return ans;
}
int main()
{
    vector<int> A = {2, 2};
    vector<int> ans = solve(A);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}