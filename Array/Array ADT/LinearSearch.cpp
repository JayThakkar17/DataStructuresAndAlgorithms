#include<iostream>
using namespace std;

class Array
{
public:
    int* A;
    int size;
    int length;
    void Display();
    void Swap(int* x,int* y);
    int LinearSearch(int key);
};

void Array::Display()
{
    cout<<"Elements Are "<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Array::Swap(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Array::LinearSearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(key == A[i])
        {
            Swap(&A[i],&A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    Array arr;
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length=0;
    
    cout<<"Enter Number ";
    cin>>n;
    cout<<"Enter All Elements: ";

    for(int i=0;i<n;i++)
        cin>>arr.A[i];
        
    arr.length = n;
    arr.Display();
    cout<<arr.LinearSearch(5);
}