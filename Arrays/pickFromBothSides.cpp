#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int solve(vector<int> &A, int B)
{
    vector<int> prefixSum, suffixSum;
    int n = A.size();
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        prefixSum.push_back(sum);
        sum += A[i];
    }
    prefixSum.push_back(sum);
    sum = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        suffixSum.push_back(sum);
        sum += A[i];
    }
    suffixSum.push_back(sum);
    int tMax = INT_MIN;
    for (int i = 0; i <= B; i++)
    {
        int tm = prefixSum[i] + suffixSum[B - i];
        tMax = tm > tMax ? tm : tMax;
    }
    // for (int i = 0; i < n + 1; i++)
    // {
    //     cout << prefixSum[i] << " " << suffixSum[i] << endl;
    // }
    return tMax;
}
int main()
{
    vector<int> A = {-969, -948, 350, 150, -59, 724, 966, 430, 107, -809, -993, 337, 457, -713, 753, -617, -55, -91, -791, 758, -779, -412, -578, -54, 506, 30, -587, 168, -100, -409, -238, 655, 410, -641, 624, -463, 548, -517, 595, -959, 602, -650, -709, -164, 374, 20, -404, -979, 348, 199, 668, -516, -719, -266, -947, 999, -582, 938, -100, 788, -873, -533, 728, -107, -352, -517, 807, -579, -690, -383, -187, 514, -691, 616, -65, 451, -400, 249, -481, 556, -202, -697, -776, 8, 844, -391, -11, -298, 195, -515, 93, -657, -477, 587};
    int B = 81;
    cout << solve(A, B);
}
