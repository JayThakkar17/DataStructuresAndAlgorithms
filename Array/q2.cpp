#include <iostream>
#include <vector>

class A
{
    private:
        int i;
    public:
        A()
        {
            i = 10;
        }
};

class B
{
    private:
        std::vector<A> a;
    public:
        B() = default;
        void push(const A a)
        {
            this->a.push_back(a);
        }
};

int main()
{
    A a,b,c,d;
    B b1;
    b1.push(a);
    b1.push(b);
    b1.push(c);
    b1.push(d);
}
