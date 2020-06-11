#include<bits/stdc++.h>
using namespace std;

void start()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen( "output.txt", "w", stdout);
#endif
}

int main()
{
  start();
  int n, m, k, s;
  cin >> n >> m >> k >> s;
  char arr[100][100];
  for ( int i = 0; i < n; i++)
  {
    for ( int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  for ( int i = 0; i < n; i++)
  {
    for ( int j = 0; j < m; j++)
    {
      if (s < k)
      {
        break;
      }
      if (arr[i][j] == '#' && i == n - 1)
      {
        break;
      }
      if (s > 0)
      {
        if (j < m - 1)
        {
          if (arr[i][j] == '.')
          {
            s = s - 3;

          }
          if ( arr[i][j] == '#')
          {
            break;

          }
          if ( arr[i][j] == '*')
          {
            s = s + 4;

          }
        }
        if (j == m - 1)
        {

          if (arr[i][j] == '.')
          {
            s = s - 2;

          }
          if ( arr[i][j] == '#')
          {
            break;

          }
          if ( arr[i][j] == '*')
          {
            s = s + 5;

          }

        }
      }
    }
  }
  if ( s >= k)
  {
    cout << "Yes" << endl << s;
  }
  else if (s < 0 || s < k)
  {
    cout << "No";
  }
  return 0;
}