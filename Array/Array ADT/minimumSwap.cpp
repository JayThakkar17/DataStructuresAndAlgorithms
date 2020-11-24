#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void minimumSwap(vector<int> v)
{
    int min = v[0];
    int max = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
            max = v[i];
        else if (v[i] < min)
            min = v[i];
    }

    swap(v[max], v[min]);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int val;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    minimumSwap(v);
}