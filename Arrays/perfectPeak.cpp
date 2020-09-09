#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int perfectPeak(vector<int> &A)
{
    vector<int> max(A.size());
    vector<int> min(A.size());
    max[0] = INT_MIN;
    for (int i = 1; i < A.size(); i++)
    {
        max[i] = max[i - 1] < A[i - 1] ? A[i - 1] : max[i - 1];
    }
    min[A.size() - 1] = INT_MAX;
    for (int i = A.size() - 2; i >= 0; i--)
    {
        min[i] = min[i + 1] > A[i + 1] ? A[i + 1] : min[i + 1];
    }

    for (int i = 1; i < A.size() - 1; i++)
    {
        if (A[i] > max[i] && A[i] < min[i])
            return 1;
    }
    return 0;
}
int main()
{
    vector<int> A = {5706, 26963, 24465, 29359, 16828, 26501, 28146, 18468, 9962, 2996, 492, 11479, 23282, 19170, 15725, 6335};
    cout << perfectPeak(A);
    return 0;
}
