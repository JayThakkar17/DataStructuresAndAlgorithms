#include <iostream>
#include <vector>
using namespace std;

void findDuplicate(int num)
{
    int v[100];
    int lastDuplicate = 0;
    int count = 1;

    for (int i = 0; i < num; i++)
        cin >> v[i];

    for (int i = 0; i < num; i++)
        if (v[i] == v[i + 1] && v[i] != lastDuplicate)
        {
            count++;
            cout << "Duplicate Element is " << v[i] << " Repeated " << count << " Times " << endl;
            lastDuplicate = v[i];
        }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    findDuplicate(num);

    return 0;
}