#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(vector<int> &A)
{
    int sum = 0;
    int count = 0;
    vector<int> preSum, sufSum;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        preSum.push_back(sum);
    }
    sum = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        sum += A[i];
        sufSum.push_back(sum);
    }
    reverse(sufSum.begin(), sufSum.end());
    int key = sum / 3;
    if(sum %3 != 0)return 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (preSum[i] == key)
        {
            for (int j = i + 2; j < A.size(); j++)
            {
                if (sufSum[j] == key)
                    count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> A = {0, 1, -1, 0};
    cout << solve(A);
    return 0;
}
