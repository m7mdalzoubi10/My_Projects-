#include <iostream>
using namespace std;

void ReadArray(float Array1[100], int& length)
{
	cout << "Please enter number of the subjects :";
	cin >> length;
	cout << endl;

	for (int i = 0; i <= length-1; i++)
	{
		cout << "Please enter the Marks of subject " << i + 1<<" :";
		cin >> Array1[i];
	}
	cout << endl;
}


void PrintArray(float Array1[100], int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Mark [" << i + 1 << "] :" << Array1[i] << endl;
	}
}


float CalculateArraySum(float Array1[100], int length) // int because it return value
{
	cout << "The sum of the Marks is ";

	int Sum = 0;
	for (int i = 0; i <= length - 1; i++)
	{
		Sum += Array1[i];
	}

	return (float)Sum; // must put return the result or it willn't Run and (float) to return ksor
}

 
int main()
{
	float Array1[100];
	int length;

	ReadArray(Array1, length);
	PrintArray(Array1, length);

	cout << "********************************" << endl;
	cout << CalculateArraySum(Array1, length) << endl;

	return 0;
}
