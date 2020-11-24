#include<iostream>
using namespace std;

int Fibonacci(int target, int term1 = 0, int term2 = 1)
{
	cout<<term1<<" ";
	if(target>=2)
		return Fibonacci(target-1,term2,term1+term2);
	else
		return term2;
}

int main()
{
	int range;
	cin>>range;
	cout<<Fibonacci(range);

	cin.get();
	return 0;
}