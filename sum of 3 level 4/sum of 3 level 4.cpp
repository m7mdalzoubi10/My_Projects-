#include <iostream>

using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3)
{
	cout << "Please enter a number 1: ";
	cin >> num1;

	cout << "Please enter a number 2: ";
	cin >> num2;

	cout << "Please enter a number 3: ";
	cin >> num3;
}

int SumOf3Numbers(int num1, int  num2, int num3)
{
	return num1 + num2 + num3;
}

float CalculateAverage(int num1, int num2, int num3)
{
	float Average;
	return Average = SumOf3Numbers(num1, num2, num3) / 3;   
}


void PrintResult(int Average)
{
	cout << "The sum of numbers = " << Average;
}


int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResult(CalculateAverage(num1,num2,num3));

	return 0;
}