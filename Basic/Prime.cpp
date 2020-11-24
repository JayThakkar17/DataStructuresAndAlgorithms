#include<iostream>
using namespace std;

void primeNumber(int num)
{
    bool isPrime = true;
    
    for(int i = 2;i<=num;i++)
    {
        if(num%i==0)
            isPrime = false;
            break;
    }
    if(isPrime)
        cout<<"Number is Prime"<<endl;
    else
        cout<<"Number is Not Prime"<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin>>num;
    primeNumber(num);

    cin.get();
    return 0;
}