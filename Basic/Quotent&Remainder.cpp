#include<iostream>

int main()
{
	int dividend,divisour,remainder,quotent;
	
	std::cout<<"Enter Dividend:";
	std::cin>>dividend;
	std::cout<<"Enter Divisour:";
	std::cin>>divisour;
	
	quotent = dividend / divisour;
	remainder = dividend % divisour;
	
	std::cout<<"Quotent is "<<quotent<<std::endl;
	std::cout<<"Remainder is "<<remainder<<std::endl;
	
	std::cin.get();
	return 0;
}
