#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a.length() != b.length())
        return false;

    for (int i = 0; i < a.length(); i++)
        if (a[i] != b[i])
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1 = "medical";
    string str2 = "decimal";

    if (isAnagram(str1, str2) == 1)
        cout << "Anagram !" << endl;
    else
        cout << "Not Anagram !" << endl;

    return 0;
}