#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(vector<int> &A)
{
    vector<int> plus(A.size());
    vector<int> minus(A.size());
    for (int i = 0; i < A.size(); i++)
    {
        plus[i] = A[i] + i;
        minus[i] = A[i] - i;
    }
    int pMax = INT_MIN, pMin = INT_MAX, mMax = INT_MIN, mMin = INT_MAX;
    for (int i = 0; i < plus.size(); i++)
    {
        pMax = pMax > plus[i] ? pMax : plus[i];
        pMin = pMin < plus[i] ? pMin : plus[i];
    }
    for (int i = 0; i < minus.size(); i++)
    {
        mMax = mMax > minus[i] ? mMax : minus[i];
        mMin = mMin < minus[i] ? mMin : minus[i];
    }
    return mMax - mMin > pMax - pMin ? mMax - mMin : pMax - pMin;
}
int main()
{
    vector<int> A = {1, 3, -1};
    cout << solve(A);
    return 0;
}
