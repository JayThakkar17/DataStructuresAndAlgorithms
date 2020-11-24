#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; //self referential
};

Node *head = NULL;

void create(int A[], int n);
void insertBegining(int d);
void insertEnd(int d);
void printList(Node *p);
void deleteBegining();
void countingNodes(Node *p);
int countingNodesRecurion(Node *p);
int sumOfNodes(Node *p);
int sumOfNodesRecursion(Node *p);
int maxNode(Node *p);
int maxNodeRecursion(Node *p);

void create(int A[], int n)
{
    Node *t, *last;
    head = new Node; //creating in heap
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node; //creating in heap
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void insertBegining(int d)
{
    Node *ptr = new Node;
    ptr->data = d;
    ptr->next = head;
    head = ptr;
}

void insertEnd(int d)
{
    Node *ptr = new Node;
    ptr->data = d;
    ptr->next = NULL;

    if (head == NULL) // if list is empty
        head = ptr;
    else // if list is not empty
    {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = ptr;
    }
}

void printList(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void deleteBegining()
{
    if (head == NULL)
        cout << "List is Empty" << endl;
    else
    {
        Node *ptr = head;
        head = head->next;
        delete[] ptr;
    }
}

void countingNodes(Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }

    cout << "Total Nodes in List Are " << count << endl;
}

int countingNodesRecurion(Node *p)
{
    int count = 0;
    if (p == 0)
        return 0;

    return countingNodesRecurion(p->next) + 1;
}

int sumOfNodes(Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int sumOfNodesRecursion(Node *p)
{
    if (p == 0)
        return 0;
    return sumOfNodesRecursion(p->next) + p->data;
}

int maxNode(Node *p)
{
    int max = -32768; //MIN_INT;

    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int maxNodeRecursion(Node *p)
{
    int max = -32768;
    if (p == 0)
        return max;

    max = maxNodeRecursion(p->next);
    return max > p->data ? max : p->data;
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    printList(head);
    cout << "Maximum Element is List is " << maxNodeRecursion(head) << endl;
    return 0;
}