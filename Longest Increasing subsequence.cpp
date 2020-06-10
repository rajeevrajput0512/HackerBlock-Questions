#include<bits/stdc++.h>
using namespace std;

int lisOptimized(int* arr, int n) {
	vector<int> v;

	v.push_back(arr[0]);

	for (int i = 1; i < n ; ++i)
	{
		int currEle = arr[i];

		auto idx = lower_bound(v.begin(), v.end(), currEle);

		if (idx == v.end()) {
			v.push_back(currEle);
		}
		else {
			*idx = currEle;
		}
	}

	return v.size();

}

int main()
{	int n;
	cin >> n;
	int arr[n];
	for ( int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	cout << lisOptimized(arr, n) << endl;
	return 0;
}