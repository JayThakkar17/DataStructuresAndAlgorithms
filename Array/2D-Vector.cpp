#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<vector<int>> movie_ratings
	{
		{1,2,3,4},
		{1,2,4,4},
		{1,3,4,5}
	};

	cout << "Movie Rating #1 is " << endl;
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;

	cout << "Movie Rating #2 is " << endl;
	cout << movie_ratings.at(1).at(0) << endl;
	cout << movie_ratings.at(1).at(1) << endl;
	cout << movie_ratings.at(1).at(2) << endl;
	cout << movie_ratings.at(1).at(3) << endl;

	cout << "Movie Rating #3 is " << endl;
	cout << movie_ratings.at(2).at(0) << endl;
	cout << movie_ratings.at(2).at(1) << endl;
	cout << movie_ratings.at(2).at(2) << endl;
	cout << movie_ratings.at(2).at(3) << endl;

	cin.get();
	return 0;
}