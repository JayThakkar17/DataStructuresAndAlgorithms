#include<iostream>
using namespace std;

int LargestElement(int arr[],int n)
{
	int max;
	max = arr[0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]>max)
				max=arr[i];
		}
	}
	return max;
}

int main()
{
	int arr[] = {10,20,90,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Largest Element is: "<<LargestElement(arr,n)<<endl;
	return 0;
}
