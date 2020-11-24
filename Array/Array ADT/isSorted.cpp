#include<iostream>
using namespace std;

void isSorted(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1])
        {
            cout<<"Array is not Sorted"<<endl;
            break;
        }
        else
        {
            cout<<"Array is Sorted"<<endl;
            break;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[100];

    cout<<"Enter elements in array: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    isSorted(arr,n);

    return 0;
}