#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int>&x, const pair<int, int>&y) {
	return x.second < y.second;
}

int solve(vector<pair<int, int>>v) {
	vector<pair<int, int>>::iterator itr1;
	vector<pair<int, int>>::iterator itr2;
	int cnt = 1;
	for (itr1 = v.begin(), itr2 = v.begin() + 1; itr2 != v.end(); ++itr2) {

		if (itr2->first >= itr1->second) {
			itr1 = itr2;
			cnt++;
		}
	}
	return cnt;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int>>v;
		int s, e;
		for (int i = 0; i < n; i++) {
			cin >> s >> e;
			v.push_back(make_pair(s, e));
		}
		sort(v.begin(), v.end(), comp);
		cout << solve(v) << endl;
	}
	return 0;
}