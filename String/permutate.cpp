#include <iostream>
#include <algorithm>
using namespace std;

void permutateString(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << " ";
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        permutateString(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str = "ABC";
    permutateString(str, 0, str.length() - 1);
    cout << endl;
}