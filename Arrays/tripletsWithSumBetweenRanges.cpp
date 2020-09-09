#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double atof(string s)
{
    int b = stoi(s);
    int in = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            in = i;
            break;
        }
    }
    if (in == -1)
        return b;
    string ad = "";
    for (int i = in + 1; i < s.size(); i++)
    {
        ad = ad + s[i];
    }
    int add = stoi(ad);
    double d = add;
    int c = -1;
    while (add)
    {
        add = add / 10;
        c++;
    }
    double ans = b + d * (pow(10, -1 * c));
}
int triplets(vector<string> &A)
{
    int n = A.size();
    if (n < 3)
        return 0;
    
    return 0;
}
int main()
{
    vector<string> A = {"1.6", "0.3"};
    //cout << triplets(A);
    //cout << atof("1241.2665595");
    return 0;
}
