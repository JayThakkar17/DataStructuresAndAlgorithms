#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll m, n;
        cin >> m;
        cin >> n;

        ll *arr1 = new ll[m];
        ll *arr2 = new ll[n];

        // Taking arr1 as input
        for (ll i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }

        // Taking arr2 as input
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        ll i = m - 1; // Pointing at last position in the first array
        ll j = 0;     // Pointing at first position in the second array

        // Moving all the larger elements from first array to second array
        for (; i >= 0 && j < n; i--, j++) // O(N)
        {
            // Swap if the element in the first array is larger than the element in the second array
            if (arr1[i] >= arr2[j])
                swap(arr1[i], arr2[j]);
            // Or else
            else
                break;
        }

        // Indivisually sorting both the arrays :
        sort(arr1, arr1 + m); // O(NlogN)
        sort(arr2, arr2 + n); // O(NlogN)

        // Printing arr1 :
        for (ll i = 0; i < m; i++)
        {
            cout << arr1[i] << " ";
        }
        // Printing arr2 :
        for (ll i = 0; i < n; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}