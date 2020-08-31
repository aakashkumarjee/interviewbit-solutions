#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int findLower(vector<int> A, int val)
{
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] <= val)
            cnt++;
    }
    return cnt;
}
int findSmaller(vector<vector<int>> &A, int el){
    int freq = 0;
    for(int i = 0; i< A.size(); i++){
        freq+= findLower(A[i],el);
    }
    return freq;
}
int findMedian(int goal,vector<vector<int>> &A, int min, int max){
    
    int x;
    while(min < max){
        int mid = (min+max)/2;
        x = findSmaller(A,mid);
        if(x == goal){
            return mid;
        }else if(x < goal){
            min = mid+1;
        }else{
            max = mid-1;
        }
    }
    return max;
}
int solve(vector<vector<int>> &A)
{
    int n = A.size();
    int m = A[0].size();
    int s = n * m;
    s = s / 2;
    int val;
    int min=INT_MAX, max= INT_MIN;
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            min = min > A[i][j] ? A[i][j] : min;
            max = max < A[i][j] ? A[i][j] : max;
        }
    }
    return findMedian(s,A,min,max);
    return val;
}
int main()
{
    vector<vector<int>> A = {{1, 2, 2},
                             {2, 2, 3},
                             {3, 3, 3}};
    vector<vector<int>> B = {{2}, {1}, {4}, {1}, {2}, {2}, {5}};
    cout << solve(B);
    return 0;
}
