#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void selectionSort(vector<int> v)
{
	int k;
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = k = i; j < v.size(); j++)
		{
			if (v[j] < v[k])
				k = j;
		}
		swap(v[i], v[k]);
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

int main()
{
	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	
	selectionSort(v);

	return 0;
}