#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define w(t)  int t; cin>>t; while(t--)
void primesieve( int *arr)
{
	for ( ll i = 3 ; i <= 1000000 ; i += 2)
	{
		arr[i] = 1;
	}

	for ( ll i = 3 ; i <= 1000000 ; i += 2)
	{
		if ( arr[i])
		{
			for ( ll j = i * i ; j <= 1000000 ; j = j + i)
			{
				arr[j] = 0;
			}
		}
	}
	arr[2] = 1;
	return;
}
int main()
{
	int arr[1000000] = {0};
	primesieve(arr);
	w(t)
	{
		ll start;
		cin >> start;
		ll end;
		cin >> end;
		ll counter = 0;
		for ( int i = start ; i <= end ; i++)
		{
			if ( arr[i])
			{
				counter++;
			}
		}

		cout << counter << endl;
	}
	return 0;
}
