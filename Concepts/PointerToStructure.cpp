#include<iostream>

struct ractangle
{
	int length;
	int breadth;
};

int main()
{
	ractangle r = {10,5};
	ractangle* p = &r;
	p->length=5;
	p->breadth=10;
	
	std::cout<<r.length<<" "<<r.breadth;
	std::cin.get();
	return 0;
}
