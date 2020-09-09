#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool solve(int A)
{
    for (int j = 1; j * j <= A; j++)
    {
        for (int i = 2; i < 33; i++)
        {
            if (pow(j, i) == A)
                return true;
            if (pow(j, i) > A)
                break;
        }
    }
    return false;
}
int main()
{

    cout << solve(400);

    return 0;
}
