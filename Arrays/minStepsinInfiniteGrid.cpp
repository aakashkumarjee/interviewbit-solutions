#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int findSteps(int x1, int x2, int y1, int y2){
    int dx = abs(x1-x2);
    int dy = abs(y1-y2);
    if(dx == dy)return dx;
    return dx > dy?dx:dy;
}
int solve(vector<int> &A, vector<int> &B)
{
    int totalSteps = 0;
    for(int i = 0; i< A.size()-1;i++){
        totalSteps += findSteps(A[i],A[i+1], B[i], B[i+1]);
    }
    return totalSteps;
}
int main()
{
    vector<int> A = {0,1,1};
    vector<int> B = {0,1,2};
    cout << solve(A,B);
    return 0;
}
