#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int* p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    cout<<endl;

     for(int i=0;i<5;i++)
        cout<<p[i]<<" ";

    delete []p;

    return 0;
}