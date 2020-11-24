#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cin>>n;
    int arr[n];
    cin>>d;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    d=d%n;
    for(int i=d;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<d;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}