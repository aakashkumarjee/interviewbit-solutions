#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int n,m;
    cin >> m >> n;
    vector< vector<int>> grid(m, vector<int> (n));
    for(int i = 0; i< m; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    

}