#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Array
{
public:
	int a[100];
	int key;
	int length;
	void Display();
	int BinarySearch(int a[], int key);
	int Get(int index);
	void Set(int index, int x);
	int Maximum();
	int Minimum();
	float Avg();
	int sum();
};

void Array::Display()
{
	cout << "Elements Are " << endl;
	for (int i = 0; i < length; i++)
		cout << a[i] << " ";
}

int Array::Get(int index)
{
	if (index >= 0 && index < length)
		return a[index];
}

void Array::Set(int index, int x)
{
	if (index >= 0 && index < length)
		a[index] = x;
}

int Array::Maximum()
{
	return a[length - 1];
}

int Array::Minimum()
{
	return a[0];
}

int Array::sum()
{
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += a[i];
	return sum;
}

float Array::Avg()
{
	return (float)sum() / length;
}

int Array::BinarySearch(int a[], int key)
{
	int l, h, mid;
	l = 0;
	h = length - 1;

	while (l <= h)
	{
		mid = (l + h) / 2;
		if (key == a[mid])
			return mid;
		else if (key < a[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}

int main()
{
	Array arr;
	cout << "Enter Size: ";
	cin >> arr.length;
	int index, pos, x;

	cout << "Enter Elements: " << endl;
	for (int i = 0; i < arr.length; i++)
		cin >> arr.a[i];
	sort(arr.a, arr.a + arr.length);

	cout << "Maximum is: " << arr.Maximum() << endl;
	cout << "Minimum is: " << arr.Minimum() << endl;
	cout << "Sum is: " << arr.sum() << endl;
	cout << "Avg Sum is: " << arr.Avg() << endl;

	return 0;
}