#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findColumnName(string &ans, int n)
{
    if (n == 0)
    {
        //ans.push_back('A');
        return;
    }
    if (n % 26 == 0)
    {
        ans.push_back('Z');
        cout << ans << endl;
        findColumnName(ans, (n - 26) / 26);
        return;
    }
    int p = n % 26;
    char c = 'A' + (p - 1);
    cout << "Value of p " << p << endl;
    ans.push_back(c);
    cout << ans << endl;
    findColumnName(ans, n / 26);
}
int findColumnNumber(string A)
{
    long long ans = 0;
    //cout << A << endl;
    for (int i = 0; i < A.size(); i++)
    {
        int n = A[i] - 'A';
        cout << n << endl;
        n++;
        ans = ans * 26 + n;
    }
    cout << "done " << endl;
    return ans;
}
string solve(int n)
{
    string ans;
    findColumnName(ans, n);
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return ans;
}
int main()
{
    int n = 702;
    int p = findColumnNumber("BAQTZ");
    cout << p << endl;
    solve(p);
    // string str;
    // cin >> str;
    //cout << findColumnNumber("AB");
    return 0;
}
