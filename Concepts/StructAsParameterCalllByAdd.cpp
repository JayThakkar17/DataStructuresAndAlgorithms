#include<iostream>

struct ractangle
{
	int length;
	int breadth;	
};

void changeLength(ractangle *p,int l)
{
	p->length=l;
}

int main()
{
	ractangle r = {10,5};
	changeLength(&r,20);
	std::cout<<r.length;
	std::cin.get();
	return 0;
}
