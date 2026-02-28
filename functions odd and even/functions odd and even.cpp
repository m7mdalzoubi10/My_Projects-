#include <iostream>
using namespace std;

void CheckId()
{
	int age;
	cout << "PLease Enter your age " << endl; 
	cin >> age;

//**********************************************************************************

	bool DriverLicense;
	cout << "Do you have a driver license ? (Yes or No)" << endl;
	cin >> DriverLicense;

//**********************************************************************************
	if (age <= 21 and DriverLicense=1)
	{
		cout << "*** Hired ***" << endl;
	}
	else cout << "*** Rejected ***" << endl;
}

int main()
{




}