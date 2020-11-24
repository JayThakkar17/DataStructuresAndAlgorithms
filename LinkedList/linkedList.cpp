#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

class LinkedList
{
public:
	Node *head;
	LinkedList()
	{
		head = NULL;
	}
	~LinkedList();

	void displayList();
	void insert(int data);
	void insertData(int pos, int x);
	void insertBegining(int data);
	void insertLast(int data);
	void deleteBegining();
	int deleteElement(int index);
	int Length();
	void countingNodes();
	int sumOfNode();
	int maxNode();
	Node *search(int key);
	Node *searchMoveToHead(int key);
	bool isSorted();
	void removeDuplicate();
	void reverseLinkedList();
	void reverseLinkedListBySliderPointers();
	Node *reverseLinkedListRecursion(Node *node);
	int getNthElement(int index);
	int getMiddleElement();
	bool isLoop();
};

/*LinkedList::LinkedList(int A[], int n)
{
	Node* last, * t;

	head = new Node;
	head->data = A[0];
	head->next = NULL;
	last = head;

	for (int i = 1; i < n; i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}*/

LinkedList::~LinkedList()
{
	Node *p = head;

	while (head)
	{
		head = head->next;
		delete p;
		p = head;
	}
}

void LinkedList::displayList()
{
	Node *p = head;

	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

int LinkedList::Length()
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

void LinkedList::insertBegining(int data)
{
	Node *p = new Node;
	p->data = data;
	p->next = head;
	head = p;
}

void LinkedList::insert(int data)
{
	Node *p = new Node;
	p->data = data;
	p->next = NULL;

	Node *q = NULL;
	Node *temp = head;

	while (p && data > temp->data)
	{
		q = temp;
		temp = temp->next;
	}

	p->next = q->next;
	q->next = p;
}

void LinkedList::insertData(int index, int x)
{
	Node *t, *p = head;

	if (index < 0 || index > Length())
		return;

	t = new Node;
	t->data = x;
	t->next = NULL;

	if (index == 0)
	{
		t->next = head;
		head = t;
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
			p = p->next;

		t->next = p->next;
		p->next = t;
	}
}

void LinkedList::insertLast(int data)
{
	Node *p = new Node;
	p->data = data;
	p->next = NULL;

	if (head == NULL)
		cout << "List is empty" << endl;

	Node *temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = p;
}

void LinkedList::deleteBegining()
{
	Node *temp = head;
	head = head->next;
	delete temp;
}

int LinkedList::deleteElement(int index)
{
	Node *p, *q = NULL;
	int x = -1;

	if (index < 1 || index > Length())
		return -1;

	if (index == 1)
	{
		p = head;
		head = head->next;
		x = p->data;
		delete p;
	}

	else
	{
		p = head;
		for (int i = 0; i < index - 1; i++)
		{
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		delete p;
	}

	return x;
}

void LinkedList::countingNodes()
{
	Node *p = head;
	int count = 0;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	cout << "Total Nodes in List Are " << count << endl;
}

int LinkedList::sumOfNode()
{
	Node *p = head;
	int sum = 0;
	while (p != NULL)
	{
		sum += p->data;
		p = p->next;
	}
	return sum;
}

int LinkedList::maxNode()
{
	Node *p = head;
	int max = -32768; //MIN_INT;

	while (p)
	{
		if (p->data > max)
			max = p->data;
		p = p->next;
	}
	return max;
}

Node *LinkedList::search(int key)
{
	Node *p = head;
	if (p == 0)
		cout << "List is Empty" << endl;

	while (p != NULL)
	{
		if (key == p->data)
			return (p);
		p = p->next;
	}
}

Node *LinkedList::searchMoveToHead(int key)
{
	Node *p = head;
	Node *q = nullptr;
	while (p != NULL)
	{
		if (key == p->data)
		{
			q->next = p->next;
			p->next = head;
			head = p;
			return p;
		}
		q = p;
		p = p->next;
	}
	return NULL;
}

bool LinkedList::isSorted()
{
	Node *temp = head;
	int x = -65536;
	while (temp != NULL)
	{
		if (temp->data < x)
			return false;
		x = temp->data;
		temp = temp->next;
	}
	return true;
}

void LinkedList::removeDuplicate()
{
	Node *p = head;
	Node *q = p->next;

	while (q != NULL)
	{
		if (p->data != q->data)
		{
			p = q;
			q = q->next;
		}
		else
		{
			p->next = q->next;
			delete q;
			q = p->next;
		}
	}
}

void LinkedList::reverseLinkedList()
{
	Node *p = head;
	int count = 0;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	p = head;
	int *A = new int[count];
	int i = 0;

	while (p != NULL)
	{
		A[i] = p->data;
		p = p->next;
		i++;
	}
	p = head;
	i--;
	while (p != NULL)
	{
		p->data = A[i--];
		p = p->next;
	}
}

void LinkedList::reverseLinkedListBySliderPointers()
{
	Node *p = head;
	Node *q = NULL;
	Node *r = NULL;

	while (p != NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	head = q;
}

Node *LinkedList::reverseLinkedListRecursion(Node *node)
{
	if (node == NULL)
		return NULL;
	if (node->next == NULL)
	{
		head = node;
		return node;
	}

	Node *node1 = reverseLinkedListRecursion(node->next);
	node1->next = node;
	node->next = NULL;
	return node;
}

int LinkedList::getNthElement(int index)
{
	if (index > Length())
		cout << "Please Enter Valid Index." << endl;
	else
	{
		Node *p = head;
		if (index == 0)
			return head->data;
		if (index < 0)
			return -1;
		else
		{
			for (int i = 0; i < index; i++)
				p = p->next;

			return p->data;
		}
	}
}

int LinkedList::getMiddleElement()
{
	//in this we have to traverse ll 2 time
	// Node *p = head;

	// for (int i = 0; i < Length() / 2; i++)
	// 	p = p->next;
	// return p->data;

	Node *p, *q;
	p = q = head;

	while (q)
	{
		q = q->next;
		if (q)
			q = q->next;
		if (q)
			p = p->next;
	}
	return (p->data);
}

bool LinkedList::isLoop()
{
	Node *p, *q;
	p = q = head;

	do
	{
		p = p->next;
		q = q->next;
		q = q != NULL ? q->next : NULL;
	} while (p && q, p != q);

	return p == q ? true : false;
}

int main()
{
	LinkedList ll;
	ll.insertData(0, 5);
	ll.insertData(1, 15);
	ll.insertData(2, 19);
	ll.insertData(3, 20);
	ll.insertData(4, 25);
	ll.insertLast(30);
	ll.insertLast(50);
	ll.displayList();
	//ll.reverseLinkedList();
	//ll.reverseLinkedListBySliderPointers();
	//ll.reverseLinkedListRecursion(ll.head);
	//cout << ll.getNthElement(4) << endl;
	//cout << "Middle Element is " << ll.getMiddleElement() << endl;
	//cout << ll.isLoop() << endl;
	cout << ll.getMiddleElement() << endl;
	ll.displayList();

	return 0;
}