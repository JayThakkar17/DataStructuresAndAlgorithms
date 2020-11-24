#include<iostream>
#include<iomanip>

void FindRatio(int arr[],int n)
{
	float pos=0.0f,neg=0.0f,z=0.0f;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
			pos++;
		else if(arr[i]<0)
			neg++;
		else
			z++;
	}
	
	float pos_res=0.0f,neg_res=0.0f,z_res=0.0f;
	pos_res=(pos/n);
	neg_res=(neg/n);
	z_res=(z/n);
	
	std::cout<<std::fixed;
	std::cout<< std::setprecision(6) <<pos_res<<std::endl;
	std::cout<<neg_res<<std::endl;
	std::cout<<z_res<<std::endl;
}
int main()
{
	int arr[] = {1,2,3,-1,-2,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	FindRatio(arr,n);
	return 0;
}
