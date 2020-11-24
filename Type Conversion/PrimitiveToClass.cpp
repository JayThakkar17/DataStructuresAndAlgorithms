#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    Complex()
    {

    }
    Complex(int k)
    {
        a=k;
        b=0;
    }
    void GetData(int x,int y)
    {
        a=x;
        b=y;
    }
    void ShowData()
    {
        cout<<"A= "<<a<<" B="<<b;
    }
};

int main()
{
    Complex c1;
    int x=5;
    c1=x;
    c1.ShowData();
return 0;
}