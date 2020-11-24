#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *top = nullptr;

void push(int val)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack is FULL!" << endl;
    else
    {
        t->data = val;
        t->next = top;
        top = t;
    }
}

int pop()
{
    Node *t;
    int x = -1;
    if (top == NULL)
        cout << "Stack is Empty!" << endl;
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void display()
{
    Node *t = top;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int isBalanced(string exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    if (top == NULL)
        return 1;
    return 0;
}

int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    return 0;
}

int isOperand(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return 0;
    return 1;
}

int stackTop()
{
    if (top == NULL)
        return -1;
    return top->data;
}
void infixToPostfix(string infix)
{
    push('N');
    int l = infix.length();
    string ns;

    for (int i = 0; i < l; i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
            ns += infix[i];

        else if (infix[i] == '(')
            push('(');

        else if (infix[i] == ')')
        {
            while (stackTop() != 'N' && stackTop() != '(')
            {
                char c = stackTop();
                pop();
                ns += c;
            }
            if (stackTop() == '(')
            {
                char c = stackTop();
                pop();
            }
        }
        else
        {
            while (stackTop() != 'N' && precedence(infix[i]) <= precedence(stackTop()))
            {
                char c = stackTop();
                pop();
                ns += c;
            }
            push(infix[i]);
        }
    }
    while (stackTop() != 'N')
    {
        char c = stackTop();
        pop();
        ns += c;
    }
    cout << ns << endl;
}

int evaluation(string postfix)
{
    int i = 0;
    int x1, x2, r = 0;

    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if (isOperand(postfix[i]))
            push(postfix[i] - '0');
        else
        {
            x2 = pop();
            x1 = pop();
            switch (postfix[i])
            {
            case '+':
                r = x1 + x2;
                break;
            case '-':
                r = x1 - x2;
                break;
            case '*':
                r = x1 * x2;
                break;
            case '/':
                r = x1 / x2;
                break;
            }
            push(r);
        }
    }
    return top->data;
}

int main()
{
    string postfix = "234*82/-";
    cout << "Result is " << evaluation(postfix) << endl;

    return 0;
}