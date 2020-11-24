#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
	string s;
	cin >> s;
	int n = s.size();

	int flag = 0;

	for (int i = 0; i < n; i++)
	{
		if (s[i] != 'a')
		{
			s[i]--;
			flag = 1;
		}
		else
		{
			if (flag == 1)
				break;
		}
	}

	if (flag == 0)
	{
		s[n - 1] = 'z';
	}

	cout << s << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll T;
	cin >> T;

	while (T--)
		solve();

	cin.get();
	return 0;
}
