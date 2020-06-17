#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, mid = 0;
    cin >> n;
    mid = (n / 2) + 1;
    for ( int i = 1; i <= mid; i++)
    {
        for ( int space = 1; space < n - 2 * (i - 1); space++)
        {
            cout << "  ";
        }

        for ( int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for ( int gap = 1; gap <= (2 * (i - 1) - 1); gap++)
        {
            cout << "  ";
        }
        for ( int k = 1; k <= i; k++)
        {   if (i == 1)
            {
                continue;
            }
            cout << k << " ";
        }
        cout << endl;
    }

    for ( int i = 1; i <= mid - 1; i++)
    {
        for ( int space = 1; space <= 2 * i; space++)
        {
            cout << "  ";
        }

        for ( int j = mid - i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for ( int gap = 1; gap <= (n - 2) - 2 * i; gap++)
        {
            cout << "  ";
        }
        for ( int k = 1; k <= mid - i; k++)
        {   if (i == mid - 1)
            {
                continue;
            }
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;

}