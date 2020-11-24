#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n - i; k > 0; k--)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;

    printPattern(num);

    return 0;
}