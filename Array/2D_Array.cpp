#include<iostream>
using namespace std;

int main()
{
	int movie_rating [3][4] {
		{0, 4, 3, 5},
		{2, 3, 3, 5},
		{1, 4, 4, 5}
	};

	cout<<movie_rating[1][2];
	return 0;
}
