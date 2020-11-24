#include<iostream>

void towerOfHanoi(int n,int a,int b,int c)
{
	if(n>0)
	{
		towerOfHanoi(n-1,a,c,b);
		std::cout<<"("<<a<<","<<c<<")"<<std::endl;
		towerOfHanoi(n-1,b,a,c);
	}
}

int main()
{
	towerOfHanoi(4,1,2,3);
	
	std::cin.get();
	return 0;
}
