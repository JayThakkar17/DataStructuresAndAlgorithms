#include<iostream>

class Entity
{
public:
	static int x,y;
	
	void Print()
	{
		std::cout<<x<<","<<y<<std::endl;
	}
};

int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	Entity::x=2;
	Entity::y=5;
	
	Entity e1;
	Entity::x=3;
	Entity::y=7;

	e.Print();
	e1.Print();
	std::cin.get();
	return 0;
}
