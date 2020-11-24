#include<iostream>
using namespace std;

void count(int n)
{
	static int d{ 1 };
	cout << n;
	cout << d;
	d++;
	if (n > 1)
		count(n - 1);
	cout << d;
}

int main()
{
	int n{ 3 };
	count(n);

	return 0;
}