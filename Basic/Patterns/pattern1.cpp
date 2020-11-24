#include <iostream>
using namespace std;

void printPattern(int num)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "*"
                 << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    printPattern(num);

    return 0;
}