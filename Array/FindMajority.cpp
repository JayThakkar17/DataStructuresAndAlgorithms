#include<iostream>
using namespace std;

int FindMajority(int arr[],int n)
{
	int count=0;
	int maxcount=0;
	int index=-1;
	
	for(int i=0;i<n;i++)
	{
		 count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
	if(count>maxcount)
	{
		maxcount=count;
		index=i;
	}
	}
	
	
	if(maxcount>n/2)
		cout<<"Majority Element is: "<<arr[index]<<endl;
	else
		cout<<"No Majority Element found"<<endl;
}

int main()
{
	int arr[] = {2,2,3,4,4,4,4,4,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	FindMajority(arr,n);
	return 0;
}
