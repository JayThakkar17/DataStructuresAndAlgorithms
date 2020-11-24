#include<iostream>
using namespace std;

int Fact(int n)
{
	if(n==0)	
		return 1;
	else
		return n * Fact(n-1);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;

	cout<<n<<"! = "<<Fact(n);

	cin.get();
	return 0;
}