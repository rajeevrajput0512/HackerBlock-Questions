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
  long long int i, j, p = 0, temp = 0;
  long int m = 100;
  long long int n;
  cin >> n;
  long int* arr = new long int[m];
  while (n > 0)
  {
    temp = n % 10;
    arr[p++] = temp;
    n = n / 10;
  }
  reverse(arr, arr + p);

  for ( int i = 0; i < p; i++)
  {
    if ( arr[i] > 9 - * (arr + i))
    {
      arr[i] = 9 - *(arr + i);
      if (arr[0] == 0)
      {
        arr[i] = 9 + *(arr + i);
      }
    }
  }

  for ( int i = 0; i < p; i++)
  {
    cout << arr[i];
  }

  return 0;
}