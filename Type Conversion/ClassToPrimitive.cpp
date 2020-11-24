#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    operator int()
    {
        int j = (a+b);
        return(j);
    }
    void GetData(int x,int y)
    {
        a = x;
        b = y;
    }
    void ShowData()
    {
        cout<<"A= "<<a<<" B="<<b;
    }
};

int main()
{
    Complex c1;
    c1.GetData(3,4);
    c1.ShowData();
    int x;
    x=c1;
    cout<<"\nX= "<<x;
    return 0;
}