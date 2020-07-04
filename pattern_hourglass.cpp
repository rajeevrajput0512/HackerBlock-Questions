#include<iostream>
using namespace std;
int main()
{
	int n, mid = 0;
	cin >> n;
	for ( int i = 0; i <= n; i++)
	{	for (int space = 0; space < i; space++)
		{
			cout << " " << " ";
		}
		for ( int j = n - i; j >= 0; j--)
		{
			cout << j << " ";
		}
		for (int k = 1; k <= n - i; k++)
		{

			cout << k << " ";
		}
		cout << endl;
	}


	for ( int i = 0; i <= n; i++)
	{	if (i == 0)
		{
			continue;
		}
		for (int space = n - i; space > 0; space--)
		{
			cout << " " << " ";
		}
		for ( int j = i; j >= 0; j--)
		{
			cout << j << " ";
		}
		for ( int k = 1; k <= i; k++)
		{
			cout << k << " ";
		}
		cout << endl;
	}

	return 0;
}
