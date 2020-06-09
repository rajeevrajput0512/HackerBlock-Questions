#include <bits/stdc++.h>
using namespace std;

void start()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
	start();
	string str;
	cin >> str;
	map<char, int > mp;
	int maxi = 0;
	char pap;
	for ( int i = 0 ; i < str.length() ; i++)
	{
		mp[str[i]]++;
		maxi = max(maxi, mp[str[i]]);
	}

	for ( auto p : mp)
	{
		if (p.second == maxi)
		{
			pap = p.first;
		}
	}

	cout << pap;
	return 0;
}