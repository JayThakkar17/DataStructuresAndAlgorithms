#include <iostream>
#include <vector>
using namespace std;

void solve(int num)
{
    vector<int> arr(num);
    int count = 1;

    for (int i = 0; i < num; i++)
        cin >> arr[i];

    for (int i = 0; i < num - 1; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
            if (count > 1)
                cout << arr[i] << " is Duplicate " << count << " Times " << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    solve(num);

    return 0;
}