#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPair(vector<int> v, int sum)
{
    //time complexity is O(n)
    int i, j;
    i = 0;            //i is pointing to first element of array/list
    j = v.size() - 1; //j is pointing to last element of array/list

    //we stop the loop when i and j becomes equal
    while (i < j)
    {
        if (v[i] + v[j] == sum)
        {
            cout << "Pair is ( " << v[i] << "," << v[j] << " ) " << endl;
            i++;
            j--;
        }
        else if (v[i] + v[j] > sum)
            j--;
        else if (v[i] + v[j] < sum)
            i++;
    }

    // int res = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     res = sum - v[i];
    //     if (v[i] <= sum)
    //     {
    //         for (int j = i + 1; j < v.size(); j++)
    //             if (v[j] == res)
    //                 cout << "Pair is " << v[i] << " And " << v[j] << endl;
    //     }
    // }

    /*int max = *max_element(v.begin(), v.end());
	int min = *min_element(v.begin(), v.end());
	int* H = new int[max] {0};

	for (int i = 0; i < v.size(); i++)
		if (v[i] <= sum)
			H[v[i]] = sum - v[i];
	int val = 0;
	for (int i = min; i <= max; i++)
	{
		val = H[i];
		if (i + H[val] == sum)
			cout << "Pair is ( " << i << "," << H[val] << " )" << endl;
	}*/
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    vector<int> v(num);

    for (int i = 0; i < num; i++)
        cin >> v[i];

    int sum;
    cin >> sum;

    findPair(v, sum);

    return 0;
}