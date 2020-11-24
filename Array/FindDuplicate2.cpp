#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findMajority(vector<int> v)
{
    unordered_map<int, int> counter;
    for (int num : v)
        if (++counter[num] > v.size() / 2)
            return num;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << findMajority(v) << endl;

    return 0;
}