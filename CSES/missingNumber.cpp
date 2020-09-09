#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long long sum = 0;
    long tmp;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> tmp;
        sum += tmp;
    }
    cout << n * (n + 1) / 2 - sum;
    return 0;
}
