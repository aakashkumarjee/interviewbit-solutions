#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a == 0 || b == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (a > b * 2 || b > a * 2)
        {
            cout << "NO" << endl;
            continue;
        }
        if ((a + b) % 3 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
