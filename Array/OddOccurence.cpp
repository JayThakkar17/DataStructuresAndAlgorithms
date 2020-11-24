#include<iostream>
using namespace std;

int OddOccurence(int arr[],int n)
{
	int count;
	
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
	if(count%2!=0)
		return arr[i];		
	else
	cout<<"No Odd Occurence"<<endl;
	}
}

int main()
{
	int arr[] = {1,2,1,3,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Odd Occurence is: "<<OddOccurence(arr,n)<<endl;
	return 0;
}
