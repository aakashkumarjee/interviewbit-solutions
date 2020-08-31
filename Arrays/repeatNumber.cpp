#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int repeatNumber(vector<int> &A)
{
    int n1, n2, c1 = 0, c2 = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (c1 == 0 && A[i] != n2)
        {
            n1 = A[i];
            c1++;
        }else if (c2 == 0 && n1 != A[i])
        {
            n2 = A[i];
            c2++;
        }else if (A[i] == n1)
        {
            c1++;
        }
        else if (A[i] == n2)
        {
            c2++;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = 0;
    c2 = 0;
    for(int i = 0; i< A.size(); i++){
        if(A[i] == n1)c1++;
        if(A[i] == n2)c2++;
    }
    int n = A.size();
    n = n / 3;
    if (n >= c1 && n >= c2)
    {
        return -1;
    }
    return c2 > c1 ? n2 : n1;
    return 0;
}
int main()
{
    vector<int> A = {1, 2, 3, 1, 1};
    cout << repeatNumber(A);

    return 0;
}