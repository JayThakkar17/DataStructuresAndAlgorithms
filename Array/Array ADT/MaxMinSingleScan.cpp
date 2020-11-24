#include <iostream>
#include <vector>
using namespace std;

void findMaxMinInSingleScan(vector<int> v)
{
    //initially max and min are same which is first value of list
    int max = v[0];
    int min = v[0];

    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > max)
            max = v[i];
        else if (v[i] < min)
            min = v[i];
    }

    cout << "Maximum Element is " << max << " & Minimum element is " << min << endl;
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

    findMaxMinInSingleScan(v);

    return 0;
}