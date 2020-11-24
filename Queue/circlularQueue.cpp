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
        front = 0;
        rear = 0;
        Q = new int[size];
    }
    Queue(int size)
    {
        this->size = size;
        front = 0;
        rear = 0;
        Q = new int[this->size];
    }
    void enqueue(int data);
    int dequeue();
    void display();
};

void Queue::enqueue(int data)
{
    if ((rear + 1) % size == front)
        cout << "Queue is FULL!" << endl;
    else
    {
        rear = (rear + 1) % size;
        Q[rear] = data;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
        cout << "Queue is empty" << endl;
    else
    {
        front = (front + 1) % size;
        x = Q[front];
    }
    return x;
}

void Queue::display()
{
    int i = front + 1;
    do
    {
        cout << Q[i] << " ";
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
    cout << endl;
}

int main()
{
    Queue q(7);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();

    cout << q.dequeue() << " Is Deleted!" << endl;
    q.display();

    return 0;
}