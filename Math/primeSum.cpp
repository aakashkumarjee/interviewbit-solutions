#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
vector<int> solve(int n)
{
    vector<int> ans;
    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            ans.push_back(i);
            ans.push_back(n - i);
            break;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return ans;
}
int main()
{
    int n = 28;
    solve(n);
    return 0;
}
