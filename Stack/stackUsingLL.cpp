#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class StackLL
{
private:
    Node *top;

public:
    StackLL()
    {
        top = nullptr;
    }
    void push(int data);
    int pop();
    int peek(int index);
    void display();
    int stackTop();
};

void StackLL::push(int data)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack is FULL!" << endl;
    else
    {
        t->data = data;
        t->next = top;
        top = t;
    }
}

int StackLL::pop()
{
    int x = -1;
    if (top == NULL)
        cout << "Stack is Empty" << endl;
    else
    {
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}

int StackLL::peek(int index)
{
    Node *t = top;
    for (int i = 0; i < index - 1; i++)
        t = t->next;
    if (t != NULL)
        return t->data;
    return -1;
}

void StackLL::display()
{
    Node *t = top;
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int StackLL::stackTop()
{
    if (top)
        return top->data;
    return -1;
}

int main()
{
    StackLL stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    stk.display();

    stk.pop();
    stk.display();

    cout << "Top Most Element is " << stk.stackTop() << endl;

    return 0;
}