#include<bits/stdc++.h>
using namespace std;
#define ll    long long
#define mod   1000000007
#define w(t)  ll t; cin>>t ; while(t--)
#define pb    push_back

ll mindistance( ll * arr , ll cow , ll n)
{
	ll start = 0;
	ll end = arr[n - 1] - arr[0];
	ll ans = -1;
	while ( start <= end)
	{
		ll temp = cow;
		ll mid = (start + end) / 2;
		ll nowcow = arr[0];
		temp--;
		for ( ll i = 1 ; i < n ; i++)
		{
			ll distance = arr[i] - nowcow;
			if ( distance >= mid)
			{
				temp--;
				nowcow = arr[i];
			}

			if ( temp == 0)
			{
				break;
			}
		}
		if (temp == 0 )
		{
			ans = mid;
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n = 0;
	cin >> n;
	ll cow = 0 ;
	cin >> cow;
	ll *arr = new ll[n];
	for ( ll i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	sort( arr , arr + n);
	cout << mindistance(arr, cow , n);
	return 0;
}