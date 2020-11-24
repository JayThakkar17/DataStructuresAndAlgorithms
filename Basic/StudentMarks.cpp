#include<iostream>

class Student
{
private:
	int scores[5];
	int sum;
public:
	Student() : sum(0) {	}	
	int calculateTotalSum()
	{
		return sum;
	}
	void input()
	{
		for(int i=0;i<5;i++)
		{
			std::cin >> scores[i];
			sum+= scores[i];
		}
	}
};

int main()
{
	int n;					//number of students
	std::cin >> n;
	Student *s = new Student[n];		//array of n students
	
	for(int i=0;i<n;i++)
	{
		s[i].input();
	}
	
	int jay_score = s[0].calculateTotalSum();		//calculate jay's score
	
	//determine how many students score more than jay
	
	int count = 0;
	for(int i=0;i<n;i++)
	{
		 int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
	}
}
