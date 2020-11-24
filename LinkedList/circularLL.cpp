#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};

class doublyLinkedList
{
    Node *head;

public:
    doublyLinkedList()
    {
        head = nullptr;
    }
    void insertData(int pos, int data);
    void createList(int A[], int n);
    void displayList();
    int getLength();
    void deleteElement(int pos);
    void reverseDoublyLL();
};

void doublyLinkedList::createList(int A[], int n)
{
    Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->prev = head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void doublyLinkedList::insertData(int pos, int data)
{
    Node *p, *t;
    p = head;

    if (pos == 0)
    {
        t = new Node;
        t->data = data;
        t->prev = NULL;
        t->next = head;
        head->prev = t;
        head = t;
    }
    else
    {
        t = new Node;
        t->data = data;

        for (int i = 0; i < pos - 1; i++)
            p = p->next;

        t->next = p->next;
        t->prev = p;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}

void doublyLinkedList::displayList()
{
    Node *p = head;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int doublyLinkedList::getLength()
{
    Node *p = head;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void doublyLinkedList::deleteElement(int pos)
{
    Node *t = head;
    if (pos == 0 || pos == 1)
    {
        head = head->next;
        if (head)
            head->prev = NULL;
        delete t;
    }
    else
    {
        Node *q = NULL;
        for (int i = 0; i < pos - 1; i++)
        {
            q = t;
            t = t->next;
        }

        q->next = t->next;
        t->next->prev = q;
        delete t;
    }
}

void doublyLinkedList::reverseDoublyLL()
{
    Node *p = head;
    while (p != NULL)
    {
        swap(p->next, p->prev);
        p = p->prev;

        if (p != NULL && p->next == NULL)
            head = p;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};

    doublyLinkedList dl;
    dl.createList(A, 5);
    dl.insertData(3, 35);
    dl.displayList();
    dl.deleteElement(1);
    dl.displayList();
    dl.reverseDoublyLL();
    dl.displayList();
    return 0;
}