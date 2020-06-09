#include<bits/stdc++.h>
using namespace std;
void start()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int counter = 0;
bool issafe( int board[10][10], int row , int col, int n)
{
    int r = row;
    int c = col;
// same column
    r = row - 1;
    c = col;
    while (r >= 0)
    {
        if ( board[r][c] == 1)
        {
            return false;
        }

        r--;
    }

    r = row;
    c = col;
    //left diagonal
    while (r >= 0 && c >= 0)
    {
        if (board[r][c] == 1)
        {
            return false;

        }
        r--;
        c--;
    }


    //right diagonal
    r = row;
    c = col;

    while (r >= 0 && c >= 0)
    {
        if (board[r][c] == 1)
        {
            return false;

        }
        r--;
        c++;
    }



    return true;

}

void printer( int board[10][10], int n)
{
    for ( int i = 0 ; i < n ; i++)
    {
        for ( int j = 0 ; j < n; j++)
        {
            if ( board[i][j])
            {
                cout << "{" << i + 1 << "-" << j + 1 << "}" << " ";
            }
        }
    }
    cout << " ";
}
bool nqueens( int board[10][10], int n , int row)
{
    if ( row == n)
    {
        printer(board, n);
        counter = counter + 1;
        return true;
    }

    for ( int col = 0 ; col < n; col++)
    {
        if ( issafe(board, row, col, n))
        {
            board[row][col] = 1;
            nqueens(board , n , row + 1);
            board[row][col] = 0;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    start();
    int n;
    cin >> n;
    int board[10][10] = {0};
    nqueens(board, n, 0);
    cout << endl;
    cout << counter;
    return 0;
}