class A;
class B
{
    private:
        A* a;
    public:
        B() = default;
        B(A& a)
        {
            this->a = &a;
        }

};

class A
{
    private:
        B* b;
    public:
        A() = default;
        void setB(B& b)
        {
            this->b = &b;
        }
};

int main()
{
    A a;
    B b(a);
    a.setB(b);
}

