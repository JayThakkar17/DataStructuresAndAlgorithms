#include<iostream>

int main()
{
	int number;
	float temp,sqrt;
	
	std::cout<<"Enter Number: ";
	std::cin>>number;
	
	sqrt = number/2;
	temp=0.0f;
	
	while(sqrt!=temp)
	{
		temp=sqrt;
		sqrt=(number/temp+temp)/2;
	}
	
	std::cout<<"The SquareRoot of "<<number<<" is "<<sqrt;
	std::cin.get();
	return 0;
}
