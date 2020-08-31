#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int findFirst(int a)
{
    int ta = a;
    while (a / 10)
    {
        a = a / 10;
        ta = a;
    }
    return ta;
}
int removeFirst(int a)
{
    int ta = a;
    int c = 0;
    while (a)
    {
        a = a / 10;
        c++;
    }
    return ta - pow(10, c - 1) * findFirst(ta);
}
bool myComp(int a, int b)
{
    if (a < 10 && b < 10)
    {
        return a > b;
    }
    int ta = findFirst(a);
    int tb = findFirst(b);
    if (ta == tb)
    {
        if (a < 10)
            return myComp(a, removeFirst(b));
        if (b < 10)
            return myComp(removeFirst(a), b);
        return myComp(removeFirst(a), removeFirst(b));
    }
    return ta > tb;
}
bool myComp2(int a, int b)
{
    int ca = 0, cb = 0, ta = a, tb = b;
    while (a)
    {
        a = a / 10;
        ca++;
    }
    while (b)
    {
        b = b / 10;
        cb++;
    }
    a = ta;
    b = tb;
    ta = (a * pow(10, cb)) + b;
    tb = (b * pow(10, ca)) + a;
    // cout << ta << " " << tb << endl;
    return ta > tb;
}
bool myComp3(string a, string b)
{
    string d = a + b;
    b = b + a;
    return d < b;
}
string solve3(const vector<int> &A)
{
    string ans, s[A.size()];
    int i;
    for (int i = 0; i < A.size(); i++)
    {
        s[i] = to_string(A[i]);
    }
    sort(s, s + A.size(), myComp3);
    string ans1 = "";
    for (int i = A.size() - 1; i >= 0; i--)
    {
        ans1 += s[i];
    }
    if (s[A.size() - 1] == "0")
    {
        return "0";
    }
    return ans1;
}
string solve(vector<int> &A)
{
    sort(A.begin(), A.end(), myComp2);
    string ans;
    for (int i = 0; i < A.size(); i++)
    {
        ans = ans + to_string(A[i]);
    }
    while (ans.size() > 1 && ans[0] == '0')
    {
        ans.erase(ans.begin(), ans.begin() + 1);
    }
    // for (int i = 0; i < A.size(); i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << endl;
    return ans;
}
int main()
{
    vector<int> A = {0, 0, 0};
    cout << solve3(A);
    return 0;
}
