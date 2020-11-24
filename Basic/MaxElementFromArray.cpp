#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{  
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]); 
    for(int i=0;i<n;i++)
    {
    	std::cin>>arr[i];
	}
  
    // Print the array 
    cout << "Array: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
  
    // Find the maximum element 
    cout << "\nMax Element = "
         << *max_element(arr, arr + n); 
    return 0; 
} 
