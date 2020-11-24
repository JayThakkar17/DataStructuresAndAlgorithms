#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue()
    {
        size = 10;
        front = -1;
        rear = -1;
        Q = new int[size];
    }
    Queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        Q = new int[this->size];
    }
    void enqueue(int val);
    int dequeue();
    void display();
};

void Queue::enqueue(int val)
{
    if (rear == size - 1)
        cout << "Queue is FULL!" << endl;
    else
    {
        rear++;
        Q[rear] = val;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
        cout << "Queue is empty" << endl;
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}

void Queue::display()
{
    for (int i = front + 1; i <= rear; i++)
        cout << Q[i] << " ";
    cout << endl;
}

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    return 0;
}
