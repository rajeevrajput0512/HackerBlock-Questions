#include<iostream>
using namespace std;
int main()
{
	int n, k, t = 0, arr[100];
	cin >> n;
	k = ((n + 1) * n) / 2;
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 1; i < k; i++)
	{

		arr[i + 1] = arr[i - 1] + arr[i];
	}


	for ( int l = 0; l < n; l++)
	{
		for ( int j = 0; j <= l; j++)
		{
			cout << arr[t] << "\t";
			t++;

		}
		cout << endl;
	}
	return 0;
}