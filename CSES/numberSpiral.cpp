#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll y, x;
        cin >> y >> x;
        ll z = max(y, x);
        if (y == z)
        {
            if (y & 1)
            {
                cout << (y - 1) * (y - 1) + x << endl;
            }
            else
            {
                cout << y * y - (x - 1) << endl;
            }
        }
        else
        {
            if (x & 1)
            {
                cout << x * x - (y - 1) << endl;
            }
            else
            {
                cout << (x - 1) * (x - 1) + y << endl;
            }
        }
    }
    return 0;
}
