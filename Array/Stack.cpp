#include<bits/stdc++.h>
using namespace std;

void ShowStack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<"\t"<<s.top();
		s.pop();
	}
	cout<<"\n";
}

int main()
{
	stack <int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<"Stack is: ";
	ShowStack(s);
	
	cout<<"\nSize of Stack is: "<<s.size();
	cout<<"\nValue at Top is: "<<s.top();
	
	cout<<"\ns.pop()";
	s.pop();
	ShowStack(s);
	return 0;
	
	cout<<"\nValue at Top is: "<<s.top();
	
}
