#include<iostream>
using namespace std;

int main()
{
    int arr[5]{5, 8, 9, 6, 4};
    int* p;
    p = &arr[0];
    int* q = new int[10];

    for(int i=0;i<5;i++)
        q[i] = p[i];

    delete []p;
    p = q;
    q = NULL;

    p[5] = 3; 
    p[6] = 7;
    p[7] = 9;
    p[8] = 1;
    p[9] = 2;


    for(int i=0;i<10;i++)
        cout<<p[i]<<" ";

    return 0;
}