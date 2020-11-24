#include<iostream>
using namespace std;

int fun(int n)
{
    static int i=1;
    if(n>=5)
        return n;
    n+=i;
    i++;
    return fun(n);
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n);

    return 0;
}