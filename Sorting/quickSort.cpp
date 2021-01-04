#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> v, int l, int h)
{
	int pivot = v[l];
	int i = l, j = h;

	do {
		do { i++; } while (v[i] <= pivot);
		do { j--; } while (v[j] > pivot);

		if (i < j) swap(v[i], v[j]);
	} while (i < j);
	swap(v[l], v[j]);
	return j;
}

void quickSort(vector<int> v, int l, int h)
{
	int j;
	if (l < h)
	{
		j = partition(v, l, h);
		quickSort(v, l, j);
		quickSort(v, j + 1, h);
	}
}

int main()
{
	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	int l = v[0];
	int h = v[v.size() + 1];

	quickSort(v,l,h);

	return 0;
}