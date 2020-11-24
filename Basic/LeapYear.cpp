#include<iostream>
using namespace std;

int main()
{
	int year;
	
	cout<<"Enter Year for Checking Leap Year or Not: "<<endl;
	cin>>year;
	
	if(year%4==0)
		cout<<"Leap Year"<<endl;
	else
		cout<<"Non-Leap Year"<<endl;
		
		return 0;
}
