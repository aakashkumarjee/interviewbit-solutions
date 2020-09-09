#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    set<ll> A;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.insert(temp);
    }
    cout << A.size() << endl;

    return 0;
}
