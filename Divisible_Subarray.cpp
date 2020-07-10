#include<bits/stdc++.h>
using namespace std;
#define ll	 	long long
#define w(t) 	int t; cin>>t; while(t--)
#define pb  	push_back

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	w(t)
	{
		ll n;
		cin >> n;
		ll arr[n];
		ll  presum[n + 1];
		memset(presum, 0, sizeof(presum));
		presum[0] = 1;
		ll sum = 0 ;
		for ( int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
			sum += arr[i];
			sum %= n;
			sum = (sum + n) % n;
			presum[sum]++;
		}
		ll ans = 0;
		for (int i = 0; i < n; ++i)
		{
			ll data = presum[i];
			ans += (data * (data - 1)) / 2;
		}
		cout << ans << endl;
	}
	return 0;
}