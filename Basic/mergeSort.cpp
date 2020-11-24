#include <iostream>
using namespace std;

int main()
{
    int A[] = {2, 4, 6, 8};
    int B[] = {3, 5, 7, 9};

    int *C = new int[8];
    int i = 0, j = 0;
    for (i = 0, j = 0; i < 4; i++, j++)
    {
        if (A[i] < B[j])
            C[i++];
        else if (A[i] > B[j])
            C[j++];
    }

    for (int i = 0; i < 8; i++)
        cout << C[i] << " ";

    return 0;
}