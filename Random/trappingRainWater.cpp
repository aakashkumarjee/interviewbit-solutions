#include <iostream>
#include <bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define miv map<int, vector<int>>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int ans = 0;
        vector<int> left(n), right(n);
        left[0] = A[0];
        right[n - 1] = A[n - 1];
        for (int i = 1; i < n; i++)
        {
            left[i] = max(left[i - 1], A[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(right[i + 1], A[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans += (min(left[i], right[i]) - A[i]);
        }
        cout << ans << endl;
    }
    return 0;
}