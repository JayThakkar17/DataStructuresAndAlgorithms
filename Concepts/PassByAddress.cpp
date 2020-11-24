#include<iostream>

void swap(int* a,int* b)			//formal parameters
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int x,y;
	x=10;
	y=5;
	swap(&x,&y);					//actual perameters
	std::cout<<x<<" "<<y;
	std::cin.get();
	return 0;
}
