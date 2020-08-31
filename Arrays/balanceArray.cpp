#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int balanceArray(vector<int> &A)
{
    int n = A.size();
    vector<int> odd(n);
    vector<int> even(n);
    even[0] = A[0];
    odd[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            odd[i] = odd[i - 1] + A[i];
            even[i] = even[i - 1];
        }
        else
        {
            even[i] = even[i - 1] + A[i];
            odd[i] = odd[i - 1];
        }
    }
    int cnt = 0;
    int oS = odd[n - 1], eS = even[n - 1];
    if (oS - odd[0] == eS - even[0])
        cnt++;
    for (int i = 1; i < n; i++)
    {
        if (oS - odd[i] + even[i - 1] == eS - even[i] + odd[i - 1])
            cnt++;
    }
    return cnt;
}
int main()
{
    vector<int> A = {2, 1, 6, 4};
    cout << balanceArray(A);
    return 0;
}