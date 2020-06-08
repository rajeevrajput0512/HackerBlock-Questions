#include<bits/stdc++.h>
using namespace std;
void start()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void spiralprint( int arr[100][100], int m , int n)
{
    int startcol = 0;
    int endcol = n - 1;
    int startrow = 0;
    int endrow = m - 1;

    while ( startrow <= endrow  &&  startcol <= endcol)
    {
        for ( int i = startrow ; i <= endrow ; i++)
        {

            cout << arr[i][startcol] << ", ";
        }
        startcol++;

        for ( int i = startcol ; i <= endcol; i++)
        {
            cout << arr[endrow][i] << ", ";
        }
        endrow--;
        if (startcol <= endcol)
        {
            for ( int i = endrow ; i >= startrow; i--)
            {
                cout << arr[i][endcol] << ", ";
            }
            endcol--;
        }


        if (startrow <= endrow)
        {
            for ( int i = endcol ; i >= startcol ; i--)
            {
                cout << arr[startrow][i] << ", ";
            }
            startrow++;
        }
    }

    cout << "END";
}

int main()
{
    start();
    int m, n;
    cin >> m >> n;
    int arr[100][100];
    for ( int i = 0 ; i < m ; i++)
    {
        for ( int j = 0 ; j < n ; j++)
        {
            cin >> arr[i][j];
        }
    }

    spiralprint(arr, m, n);
}