#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    ll mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        mx = mx > tmp ? mx : tmp;
        ans += (mx - tmp);
    }
    cout << ans;
    return 0;
}
