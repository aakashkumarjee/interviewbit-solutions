#include <iostream>
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int solve(vector<int> &A)
{
    vector<long long> ones(64, 0);
    vector<long long> zeroes(64, 0);
    for (int j = 0; j < 64; j++)
    {
        for (int i = 0; i < A.size(); i++)
        {
            int temp = A[i] & 1;
            A[i] = A[i] >> 1;
            if (temp == 0)
            {
                zeroes[j]++;
            }
            else
            {
                ones[j]++;
            }
        }
    }
    long long ans = 0;
    // for (int i = 0; i < 32; i++)
    // {
    //     cout << ones[i] << " " << zeroes[i] << endl;
    // }
    for (int i = 0; i < 64; i++)
    {
        ans = (ans + (ones[i] * zeroes[i] * 2) % MOD) % MOD;
    }
    return ans % MOD;
}
int main()
{
    vector<int> A = {1};
    cout << solve(A);
    return 0;
}
