#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int count[256] = {0};
	int maxi = 0;
	char pap;
	for ( int i = 0 ; i < str.length(); i++)
	{
		++count[str[i]];
		if ( maxi < count[str[i]])
		{
			maxi = count[str[i]];
			pap = str[i];
		}
	}
	cout << pap;
	return 0;
}