#include<iostream>
#include<algorithm>
using namespace std;

class Array
{
public:
    int a[100];
    int length;
    void Display();
    void Reverse(int a[]);
    void Reverse2(int a[]);
};

void Array::Display()
{
    cout<<"Elements Are:"<<endl;
    for(int i=0;i<length;i++)
        cout<<a[i]<<" ";
}

void Array::Reverse(int a[])
{
    int i,j;
    int* b;
    b = new int[length];

    for(i = length-1,j = 0;i >= 0;i--,j++)
        b[j] = a[i];
    for(i=0;i<length;i++)
        a[i] = b[i];
}

void Array::Reverse2(int a[])
{
    int i,j;
    for(i = 0,j = length-1;i < j;i++,j--)
        swap(a[i],a[j]);
}

int main()
{
    Array arr;
    cout<<"Enter Size: ";
    cin>>arr.length;
    cout<<"Enter Elements: "<<endl;

    for(int i=0;i<arr.length;i++)
        cin>>arr.a[i];

    arr.Reverse2(arr.a);
    arr.Display();

    return 0;
}