#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *front;
Node *rear;

void enqueue(int data)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Queue is FULL!" << endl;
    else
    {
        t->data = data;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    Node *t;
    if (front == NULL)
        cout << "Queue is Empty!" << endl;
    else
    {
        t = front;
        x = t->data;
        front = front->next;
        delete t;
    }
    return x;
}

void display()
{
    Node *t = front;
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();

    cout << dequeue() << " Is Deleted!" << endl;
    display();
    return 0;
}