#include<iostream>
using namespace std;

void rightShift(int arr[],int n,int k)
{
    int b[100];
    for(int i = 0;i < n; i++)
        b[(i + k) % n] = arr[i];

    cout<<"After Right Shift Elemets Are: "<<endl;
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}

int main()
{
    int arr[100];
    int n, k;
    cout<<"Enter Size of Array: ";
    cin>>n;
    cout<<"Enter Elements in Array: "<<endl;

    for(int i = 0;i < n; i++)
        cin>>arr[i];

    cout<<"Enter Shift Value: ";
    cin>>k;

    rightShift(arr,n,k);

    return 0;
}