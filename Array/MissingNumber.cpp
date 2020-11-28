#include<iostream>
#include<vector>
using namespace std;

void missingNumber(int num)
{
	int n;
	int sum = 0, form = 0, ans = 0;
	while (num-->0)
	{
		cin >> n;
		vector<int> arr(n);

		for (int i = 0; i < n - 1; i++)
			cin >> arr[i];
		
		form = n * (n + 1) / 2;
		
		for (int i = 0; i < n; i++)
			sum += arr[i];

		ans = form - sum;
		cout << ans << endl;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;
	missingNumber(num);

	cin.get();
	return 0;
}