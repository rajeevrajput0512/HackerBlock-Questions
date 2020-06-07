#include <bits/stdc++.h>
using namespace std;

void start()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int countBoardPathsRec(int start, int end) {
	if (start == end) {
		return 1;
	}

	if (start > end) {
		return 0;
	}

	int count = 0;

	for (int dice = 1; dice <= 3 ; dice++)
	{
		count += countBoardPathsRec(start + dice, end);
	}

	return count;
}

int countBoardPathsTopDownDp(int start, int end, int* dp) {
	if (start == end) {
		dp[start] = 1;
		return 1;
	}

	if (start > end) {
		return 0;
	}
	if (dp[start] != 0) {
		return dp[start];
	}

	int count = 0;

	for (int dice = 1; dice <= 3 ; dice++)
	{
		count += countBoardPathsTopDownDp(start + dice, end, dp);
	}
	dp[start] = count;

	return count;
}


int countBoardPathsBottomUpDp(int start, int end) {

	int dp[100] = {0};

	dp[end] = 1; //base case

	for (int i = end - 1; i >= 0 ; i--)
	{
		for (int dice = 1; dice <= 3 ; dice++)
		{
			if (i + dice <= end) {
				dp[i] += dp[i + dice];
			}
		}
	}

	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;


	return dp[start];

}

int countBoardPathsBottomUpDpLeftToRight(int start, int end) {

	int dp[100] = {0};

	dp[start] = 1; //base case

	for (int i = 1; i <= end ; i++)
	{
		for (int dice = 1; dice <= 3 ; dice++)
		{
			if (i - dice >= start) {
				dp[i] += dp[i - dice];
			}
		}
	}

	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;


	return dp[end];

}

void countterbhat(int start, int end)
{
	int dp[100] = {0};
	dp[0] = 1;
	for ( int i = 1; i <= end; i++)
	{
		int j = i - 1;
		int dice = 3;
		while (dice--)
		{
			if (j >= 0)
			{
				dp[i] = dp[i] + dp[j];
			}
			j--;
		}
	}
	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;

	cout << dp[end];
}
int countBoardPathsBottomUpDpLeftToRightOptimized(int start, int end) {

	int dp[100] = {0};
	int k = 3; //no. of dice
	dp[start] = 1;
	dp[start + 1] = 1;

	for ( int i = 2; i <= end ; i++)
	{	if ( i - k - 1 >= 0)
		{
			dp[i] = 2 * dp[i - 1] - dp[i - k - 1];
		}
		else
		{
			dp[i] = 2 * dp[i - 1];
		}
	}

	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;


	return dp[end];

}



int main(int argc, char const *argv[])
{
	start();
	int start = 0, end = 6;
	cout << countBoardPathsRec(start, end) << endl;

	int dp[100] = {0};
	cout << countBoardPathsTopDownDp(start, end, dp) << endl;
	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;


	cout << countBoardPathsBottomUpDp(start, end) << endl;
	cout << countBoardPathsBottomUpDpLeftToRight(start, end) << endl;
	cout << countBoardPathsBottomUpDpLeftToRightOptimized(start, end) << endl;
	countterbhat(start, end);
	return 0;
}

