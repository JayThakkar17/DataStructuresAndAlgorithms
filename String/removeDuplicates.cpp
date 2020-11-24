#include <iostream>
using namespace std;

int removeDuplicates(char *pStr)
{
    if (!*pStr || !pStr)
        return 0;

    int count[256] = {0};

    int current = 0, next = 0;

    while (pStr[current] != '\0')
    {
        if (++count[pStr[current]] == 1)
        {
            pStr[next++] = pStr[current];
        }
        ++current;
    }

    pStr[next] = '\0';
    return next;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char str[] = "abccccccc";
    removeDuplicates(str);
    cout << str;

    return 0;
}