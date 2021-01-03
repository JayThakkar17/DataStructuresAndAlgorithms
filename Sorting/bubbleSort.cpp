#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> v)
{
    int flag;
    for (int i = 0; i < v.size() - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1])
                    flag = 1;
            }
        }
        if (flag == 0)
            break;
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    bubbleSort(v);

    return 0;
}