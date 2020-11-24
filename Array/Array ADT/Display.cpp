#include<iostream>
using namespace std;

class Array
{
public:
    int* A;
    int size;
    int length;
    void Display();
    void Insert(int index,int x);
    void Append(int x);
    int Delete(int index);
};

void Array::Display()
{
    cout<<"Elements Are "<<endl;
    for(int i=0;i<length;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void Array::Append(int x)
{
    if(length<size)
        A[length++]=x;
}

void Array::Insert(int index,int x)
{
    if(index>=0 && index<=length)
    {
        for(int i=length;i>index;i--)
            A[i] = A[i-1];
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index)
{
    int x;
    x = A[index];
    if(index>=0 && index<=length)
    {
        for(int i=index;i<length;i++)
            A[i] = A[i+1];
        length--;
        return x;
    }
}

int main()
{
    Array arr;
    int n;
    cout<<"Enter The Size of Array: ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length=0;

    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter All Elements: "<<endl;

    for(int i=0;i<n;i++)
        cin>>arr.A[i];

    arr.length=n;
    arr.Display();
    //arr.Insert(1,4);
    //arr.Append(7);
    cout<<arr.Delete(1)<<" is Deleted"<<endl;
    arr.Display();

    return 0;
}