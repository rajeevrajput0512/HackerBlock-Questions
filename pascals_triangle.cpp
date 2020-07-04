#include<iostream>
using namespace std;
int fact(int n) {
    int sum = 1;
    for ( int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    int n, p = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for ( int space = 1; space < n - i; space++)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            if (n == 1 || n == 0)
            {
                cout << p << " ";
            }
            else
            {

                int r = 0;
                r = fact(i) / (fact(i - j) * fact(j));
                cout << r << " ";
            }
        }
        cout << endl;
    }

    return 0;
}