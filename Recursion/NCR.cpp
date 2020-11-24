#include<iostream>
using namespace std;

int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return fact(n - 1) * n;
}

int NCR(int n, int r)
{
	int t1, t2, t3;
	t1 = fact(n);
	t2 = fact(r);
	t3 = fact(n - r);
	return t1 / (t2 * t3);
}

int Incr(int n, int r)
{
	if (r == 0 || n == r)
		return 1;
	return Incr(n - 1, r - 1) + Incr(n - 1, r);
}

int main()
{
	int n, r;
	cin >> n;
	cin >> r;
	//cout << fact(n);
	cout << NCR(n, r) << endl;
	cout << "Without Recursion Answer is " << Incr(n, r) << endl;
	cin.get();
	return 0;
}