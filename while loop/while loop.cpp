#include <iostream>
using namespace std;

int main()
{
	int Num;

	cout << "Please enter a positive number :";
	cin >> Num;

	while (Num<=0) // We use while if we don't know how much he will enter wronge number ...if we use for loop there should be a number of attemps 
	{
		cout << "Please enter a positive number :";
		cin >> Num;
	}

	cout << "your number is " << Num;

	return 0;
}