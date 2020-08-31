#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &A)
{
    int n = A.size();
    bool present[n + 1] = {false};

    // Mark the occurrences
    for (int i = 0; i < n; i++)
    {

        // Only mark the required elements
        // All non-positive elements and
        // the elements greater n + 1 will never
        // be the answer
        // For example, the array will be {1, 2, 3}
        // in the worst case and the result
        // will be 4 which is n + 1
        if (A[i] > 0 && A[i] <= n)
            present[A[i]] = true;
    }

    // Find the first element which didn't
    // appear in the original array
    for (int i = 1; i <= n; i++)
        if (!present[i])
            return i;

    // If the original array was of the
    // type {1, 2, 3} in its sorted form
    return n + 1;
}
int main()
{
    vector<int> A = {1, 2, 3};
    cout << firstMissingPositive(A);
    return 0;
}