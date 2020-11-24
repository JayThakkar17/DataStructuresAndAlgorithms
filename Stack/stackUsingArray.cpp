#include <iostream>
using namespace std;

class Stack
{
private:
    int *st;
    int size;
    int top;

public:
    Stack()
    {
        size = 10;
        top = -1;
        st = new int[size];
    }
    Stack(int size)
    {
        this->size = size;
        top = -1;
        st = new int[this->size];
    }

    void push(int data);
    int pop();
    int peek(int index);
    int isFull();
    int isEmpty();
    int stackTop();
    void displayStack();
};

int Stack::isEmpty()
{
    return top == -1;
}

int Stack::isFull()
{
    return top == size - 1;
}

void Stack::push(int data)
{
    if (isFull())
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        st[top] = data;
    }
}

int Stack::pop()
{
    int x = -1;
    if (isEmpty())
        cout << "Stack Underflow" << endl;
    else
    {
        x = st[top];
        top--;
    }
    return x;
}

int Stack::peek(int index)
{
    int x = -1;
    if (top - index + 1 < 0)
        cout << "Invalid Index" << endl;
    else
        x = st[top - index + 1];
    return x;
}

void Stack::displayStack()
{
    for (int i = top; i >= 0; i--)
        cout << st[i] << " ";
    cout << endl;
}

int Stack::stackTop()
{
    if (isEmpty())
        return -1;
    return st[top];
}

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.displayStack();

    cout << st.peek(1) << endl;

    return 0;
}