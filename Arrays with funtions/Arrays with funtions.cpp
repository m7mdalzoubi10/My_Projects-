#include <iostream>

using namespace std;

void  ReadGrades(float Grades[3])
{
	for (int i = 0; i <= 2; i++)
	{
		cout << "PLease enter Grade " << i+1 <<" :";
		cin >> Grades[i];
	}
}

float AvarageGrades(float Grades[3]) //float and not void
{
	return (Grades[0] + Grades[1] + Grades[2]) / 3; //must write return
}


int main()
{
	float Grades[3];

	ReadGrades(Grades);
	cout << "The avarage of the grades is " << AvarageGrades(Grades);

	return 0;
}