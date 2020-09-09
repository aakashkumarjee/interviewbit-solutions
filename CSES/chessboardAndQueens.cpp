#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<bool> columns(8, false);
vector<bool> diag1(16, false);
vector<bool> diag2(16, false);
int ways = 0;
bool canPlace(vector<vector<char>> &board, int row, int col)
{
    if (board[row][col] == '*')
        return false;
    if (columns[col] || diag1[row + col] || diag2[row - col + 7])
        return false;
    return true;
}

void placeQueen(vector<vector<char>> &board, int row)
{
    if (row == 8)
    {
        ways++;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        if (canPlace(board, row, i))
        {
            columns[i] = true;
            diag1[i + row] = true;
            diag2[row - i + 7] = true;
            placeQueen(board, row + 1);
            columns[i] = false;
            diag1[i + row] = false;
            diag2[row - i + 7] = false;
        }
    }
}

void solve(int r)
{
    if (r == 8)
    {
        ways++;
        return;
    }
    for (int c = 0; c < 8; c++)
    {
        if (columns[c] || diag1[r + c] || diag2[r - c + 7])
            continue;
        columns[c] = diag1[c + r] = diag2[r - c + 7] = true;
        solve(r + 1);
        columns[c] = diag1[r + c] = diag2[r - c + 7] = false;
    }
}
int main()
{
    vector<vector<char>> board(8, vector<char>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> board[i][j];
        }
    }
    placeQueen(board, 0);
    cout << ways << endl;
    return 0;
}
