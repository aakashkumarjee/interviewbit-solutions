#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &A)
{
    int n = A.size();
    int i = 0, j = 1;
    while (i < n && j < n)
    {
        if (A[i] == A[j])
        {
            int k = j + 1;
            while (k < n)
            {
                if (A[k] > A[j])
                    break;
            }
            A[j] = A[k];
            j = k + 1;
            i++;
        }
    }
    return i + 1;
}
int main()
{
    vector<int> A = {1, 1, 2, 2, 3, 3, 4};
    int size = solve(A);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    
    return 0;
}
