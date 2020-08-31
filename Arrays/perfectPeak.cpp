#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int perfectPeak(vector<int> &A)
{
    vector<int> max(A.size()+1);
    vector<int> min(A.size()+1);
    for(int i =0; i < A.size(); i++){
        max[i+1] = max[i] < A[i] ? A[i] : max[i];
    }
    min.push_back(INT_MAX);
    for(int i =A.size()-1; i >= 0; i++){
        min[i+1] = min[i] > A[i] ? A[i] : min[i];
    }
    // for(int i = 0; i< A.size(); i++){
    //     cout << A[i] << " " <<min[i];
    // }
    // for(int i = 0; i< A.size(); i++){
    //     cout << A[i] << " " <<max[i];
    // }
    for(int i = 0; i < A.size(); i++){
        if(A[i] > max[i] && A[i] < min[i])return 1;
    }
    return 0;
}
int main()
{
    vector<int> A = {5706, 26963, 24465, 29359, 16828, 26501, 28146, 18468, 9962, 2996, 492, 11479, 23282, 19170, 15725, 6335};
    cout << perfectPeak(A);
    return 0;
}
