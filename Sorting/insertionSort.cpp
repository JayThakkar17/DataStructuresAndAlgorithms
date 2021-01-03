#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertionSort(vector<int> v)
{
	for (int i = 1; i < v.size(); i++)
	{
		int j = i - 1;
		int x = v[i];

		while (j > -1 && v[j] > x)
		{
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = x;
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

	
	insertionSort(v);

	return 0;
}