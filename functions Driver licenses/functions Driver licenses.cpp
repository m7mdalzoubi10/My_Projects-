#include <iostream>
using namespace std;

struct strInfo
{
	int age;
	string DriverLicense;
};


strInfo ReadId()
{
	strInfo Info;
	cout << "PLease Enter your age " << endl;
	cin >> Info.age;

	//**********************************************************************************

	cout << "Do you have a driver license ? (Yes or No)" << endl;
	cin >> Info.DriverLicense;

	return Info;
}


void PrintResult(strInfo Info)
{
	if (Info.age >= 21 && (Info.DriverLicense == "Yes" || Info.DriverLicense == "yes"))
	{
		cout << "*** Hired ***" << endl;
	}
	else cout << "*** Rejected ***" << endl;
}



int main()
{
	
	PrintResult(ReadId());

	return 0;
}