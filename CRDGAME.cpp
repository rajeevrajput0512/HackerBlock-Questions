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
		int n;
		cin >> n;
		ll pointsA = 0;
		ll pointsB = 0;
		while (n--)
		{
			string a, b;
			cin >> a >> b;
			ll j1 = a.length() - 1;
			ll j2 = b.length() - 1;
			ll i1 = 0;
			ll i2 = 0;
			ll counterA = 0;
			ll counterB = 0;
			while (i1 <= j1)
			{
				counterA += i1 == j1 ? (int(a[i1]) - '0') : (int(a[i1]) - '0') + (int(a[j1]) - '0');
				i1++;
				j1--;
			}
			while (i2 <= j2)
			{
				counterB += i2 == j2 ? (int(b[i2]) - '0') : (int(b[i2]) - '0') + (int(b[j2]) - '0');
				i2++;
				j2--;
			}

			if (counterA == counterB)
			{
				pointsB++;
				pointsA++;
			}
			else
			{
				counterA > counterB ? pointsA++ : pointsB++;
			}
		}

		if ( pointsA == pointsB)
		{

			cout << "2" << " " << pointsA << endl;
		}
		else
		{
			pointsA < pointsB ? cout << "1" << " " << pointsB << endl : cout << "0" << " " << pointsA << endl;
		}

	}
	return 0;
}