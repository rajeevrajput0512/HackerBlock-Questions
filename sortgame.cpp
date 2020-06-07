#include<bits/stdc++.h>
using namespace std;
void start()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
bool comp( pair<string, int> a, pair<string, int> b)
{
	if ( a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second > b.second;
}
int main()
{
	start();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int limit;
	cin >> limit;
	int n;
	cin >> n;
	pair<string, int> p[n];
	for ( int i = 0; i < n ; i++)
	{
		cin >> p[i].first >> p[i].second;
	}

	sort(p, p + n, comp);
	for ( int i = 0; i < n ; i++)
	{
		if ( p[i].second >= limit)
		{
			cout << p[i].first << " " << p[i].second << "\n";
		}
	}

}