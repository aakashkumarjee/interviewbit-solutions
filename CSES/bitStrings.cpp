#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll ans = 1;
    while (n--)
    {
        ans = (ans * 2) % 1000000007;
    }
    cout << ans;
    return 0;
}
