#include<iostream>
using namespace std;

//class Product;
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
    int Getp()
    {
        return(p);
    }
    int GetQ()
    {
        return(q);
    }
};

class Item
{
private:
    int a,b;
public:
    Item()
    {

    }
    Item(Product r)
    {
         a=r.Getp();
         b=r.GetQ();
    }
    void ShowData()
    {
        cout<<"A= "<<a<<" B="<<b;
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