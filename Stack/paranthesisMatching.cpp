#include <iostream>
#include <stdlib.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};
Node *top = NULL;

void push(int data)
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

char pop()
{
	Node *t;
	int x = -1;

	if (top == NULL)
		cout << "Stack is Empty" << endl;
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
	Node *p = top;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
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

int main()
{
	string exp = "((a+b)*(c-d))";
	if (isBalanced(exp) == 1)
		cout << "Yes It's Balanced!" << endl;
	if (isBalanced(exp) == 0)
		cout << "No It's Not Balanced!" << endl;

	//char* exp = "((a+b)*(c-d))";

	return 0;
}