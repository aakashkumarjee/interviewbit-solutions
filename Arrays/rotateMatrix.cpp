#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &A)
{
    int n = A.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            int temp = A[n - j - 1][n - (n - i - 1) - 1];
            A[n - j - 1][n - (n - i - 1) - 1] = A[n - i - 1][n - j - 1];
            A[n - i - 1][n - j - 1] = A[j][n - i - 1];
            A[j][n - i - 1] = A[i][j];
            A[i][j] = temp;
        }
    }
}
int main()
{

    return 0;
}
