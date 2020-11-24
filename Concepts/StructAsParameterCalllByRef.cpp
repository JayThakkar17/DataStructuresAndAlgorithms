#include<iostream>

struct ractangle
{
	int length;
	int breadth;
};

int area(ractangle &r1)						//formal parameters
{
	return r1.length * r1.breadth;
}

int main()
{
	ractangle r = { 10,5 };
	std::cout << area(r);					//actual parameters
	std::cin.get();
	return 0;
}

