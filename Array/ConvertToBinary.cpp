// Example program
#include <iostream>
#include <string>
using namespace std;

void convertToBinary(unsigned int n)
{
    if (n / 2 != 0) 
	{
        convertToBinary(n / 2);
    }
    cout<<(n%2);
}
int main()
{
  unsigned int i;

    cin>>i;
    
    cout<<"number: "<<i<<" :: in binary is: ";
    convertToBinary(i);
    
}

