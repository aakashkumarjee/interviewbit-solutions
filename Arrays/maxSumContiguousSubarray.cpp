#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(vector<int> &A)
{
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        ans = ans > sum ? ans : sum;
        if (sum < 0)
            sum = 0;
    }
    return ans;
}
int main()
{
    vector<int> A = {-500};
    cout << solve(A);
    return 0;
}
