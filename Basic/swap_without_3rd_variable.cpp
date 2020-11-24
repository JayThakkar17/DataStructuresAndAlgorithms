#include<iostream>
using namespace std;

int main()
{
	int x,y;
	
	cout<<"Enter X and Y:"<<endl;
	cin>>x>>y;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout<<"X = "<<x<<"\nY = "<<y;
	return 0;
}

