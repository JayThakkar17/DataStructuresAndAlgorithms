#include<iostream>

struct rectangle
{
	int length;
	int breadth;
};

void initialize(rectangle* r, int l, int b)			//call by address
{
	r->length = l;
	r->breadth = b;
}

void area(rectangle r)								//call by value
{
	std::cout<< (r.length * r.breadth)<<std::endl;
}

void changeLength(rectangle* r, int l)				//call by address
{
	r->length = l;
}

int main()
{
	rectangle r;
	initialize(& r, 10, 5);
	changeLength(& r, 20);
	area(r);
	std::cout << "Length->" << r.length << " " << "Breadth->" << r.breadth;
	std::cin.get();
	return 0;
}
