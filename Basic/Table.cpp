#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }

    cin.get();
    return 0;
}