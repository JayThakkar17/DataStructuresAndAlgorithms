#include <iostream>
using namespace std;

template <class T>
class stack
{
private:
    T *st;
    int size;
    int top;

public:
    stack()
    {
        size = 10;
        top = -1;
        st = new T[size];
    }
    stack(int size)
    {
        this->size = size;
        top = -1;
        st = new T[this->size];
    }
    void push(T data);
    T pop();
    T peek(int index);
    int stackTop();
    int isEmpty();
    int isFull();
    void displayStack();
};

template <class T>
void stack<T>::push(T data)
{
    if (isFull())
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        st[top] = data;
    }
}

template <class T>
T stack<T>::pop()
{
    T x = -1;
    if (isEmpty())
        cout << "Stack Underflow" << endl;
    else
    {
        x = st[top];
        top--;
    }
    return x;
}

template <class T>
T stack<T>::peek(int index)
{
    T x = -1;
    if (top - index + 1 < 0)
        cout << "Invalid Index" << endl;
    else
        x = st[top - index + 1];
    return x;
}

template <class T>
void stack<T>::displayStack()
{
    for (int i = top; i >= 0; i--)
        cout << st[i] << " ";
    cout << endl;
}

template <class T>
int stack<T>::stackTop()
{
    if (isEmpty())
        return -1;
    return st[top];
}

template <class T>
int stack<T>::isEmpty()
{
    return top == -1;
}

template <class T>
int stack<T>::isFull()
{
    return top == size - 1;
}

int main()
{
    stack<int> stk(5);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);

    stk.displayStack();

    cout << stk.peek(1) << endl;

    return 0;
}
