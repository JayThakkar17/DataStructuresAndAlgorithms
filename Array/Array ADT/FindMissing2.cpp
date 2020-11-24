#include <iostream>
#include <vector>
using namespace std;

void findDuplicate(vector<int> v, int num)
{
    int diff;
    diff = v[0] - 0;
    for (int i = 0; i < num - 1; i++)
        if (v[i] - i != diff)
        {
            cout << "Missing Element is " << i + diff << endl;
            break;
        }
}

int main()
{
    int num;
    cout << "Enter Size: ";
    cin >> num;
    vector<int> v(num);

    cout << "Enter Elements in Array: " << endl;
    for (int i = 0; i < num; i++)
        cin >> v[i];

    findDuplicate(v, num);
    return 0;
}