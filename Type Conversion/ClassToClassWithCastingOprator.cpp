#include<iostream>
using namespace std;

class Item
{
private:
    int a,b;
public:
    void ShowData()
    {
        cout<<"A= "<<a<<" B="<<b;
    }
    void SetItem(int x,int y)
    {
        a=x;
        b=y;
    }
};
class Product
{
private:
    int p,q;
public:
    void SetData(int x,int y)
    {
        p=x;
        q=y;
    }
    operator Item()
    {
        Item temp;
        temp.SetItem(p,q);
        return temp;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.SetData(3,4);
    i1=p1;
    i1.ShowData();
    return 0;
}