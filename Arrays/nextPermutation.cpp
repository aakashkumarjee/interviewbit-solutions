#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool myComp(int a, int b)
{
    return a > b;
}
vector<int> solve(vector<int> &A)
{
    int n = A.size();
    if (A.size() < 2)
        return A;

    // bool isS = is_sorted(A.begin(), A.end(), myComp);
    // if (isS)
    // {
    //     sort(A.begin(), A.end());
    //     return A;
    // }
    int min = INT_MAX;
    int i;
    int in;
    for (i = A.size() - 2; i >= 0; i--)
    {

        if (A[i] < A[i + 1])
        {
            // int temp = A[i];
            // A[i] = A[min];
            // A[min] = temp;
            // sort(A.begin() + i + 1, A.end());
            break;
        }
        // min = A[min] > A[i] ? i : min;
    }
    for (int j = i + 1; j < n; j++)
    {
        if (A[j] > A[i] && min > A[j])
        {
            in = j;
            min = A[j];
        }
    }
    if (in != -1 && i != -1)
    {
        swap(A[i], A[in]);
    }
    sort(A.begin() + i + 1, A.end());
    return A;
}
int main()
{
    vector<int> A = {701, 319, 695, 52};
    vector<int> B = {7, 3, 6, 1};
    vector<int> ans = solve(A);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    ans = solve(B);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
