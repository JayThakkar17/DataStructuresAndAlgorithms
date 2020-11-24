#include<iostream>
using namespace std;

unsigned long int Power(int exponent,int base)
{
    int res=1;

    while(exponent!=0)
    {
        res *= base;
        --exponent;
    }
    //return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int exponent;
    cout<<"Enter Exponent: "<<endl;
    cin>>exponent;

    int base;
    cout<<"Enter Base: "<<endl;
    cin>>base;

    cout<<"Answer is "<<Power(exponent,base);
    return 0;
}