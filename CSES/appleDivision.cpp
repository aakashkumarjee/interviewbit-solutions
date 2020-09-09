#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long n;
    cin >> n;
    vector<long long> A(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    long long sum = 0;
    long long res = INT_MIN;
    for (long long i = 0; i < n; i++)
    {
        sum += A[i];
    }

    long long totalSub = 1 << n;
    for (long long i = 0; i < totalSub; i++)
    {
        long long mask = i;
        long long ans = 0;
        for (long long j = 0; j < n; j++)
        {
            if (i >> j & 1)
            {
                ans += A[j];
            }
        }
        //cout << ans << endl;
        if (ans <= sum / 2)
        {
            res = max(res, ans);
        }
    }
    //cout << res << " " << sum << endl;
    cout << sum - 2 * res << endl;
    return 0;
}
