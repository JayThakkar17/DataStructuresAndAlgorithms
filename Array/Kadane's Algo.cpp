#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(int num)
{
	int n;
	int res = 0, sum = 0;
	while (num--)
	{
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int *dp;
		dp = new int[n];
		dp[0] = arr[0];

		int maximum = dp[0];

		for (int i = 1; i < n; i++)
		{
			dp[i] = max(arr[i], dp[i - 1] + arr[i]);

			if (dp[i] > maximum)
				maximum = dp[i];
		}
		cout << maximum << endl;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;
	solve(num);

	cin.get();
	return 0;
}
