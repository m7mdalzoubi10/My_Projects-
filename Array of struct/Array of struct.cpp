#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
	string FullName;
	int Age;
	string PhoneNumber;
};


void ReadInfo(strInfo& Info)
{
	cout << "Please enter your full name : ";
	getline(cin, Info.FullName);

	cout << "Enter your age :";
	cin >> Info.Age;
	cin.ignore();  // this line solve the problem of being getline in second time ignored

	cout << "Enter your phone number :";
	cin >> Info.PhoneNumber;
	cin.ignore(); // must putin after every code have space or enter
}


void PrintInfo(strInfo Info)
{
	cout << "***************************************" << endl;

	cout << "Name : " << Info.FullName << endl;
	cout << "Age : " << Info.Age << endl;
	cout << "Phone number : " << Info.PhoneNumber << endl;

	cout << "***************************************" << endl;
}


void ReadPersons(strInfo Persons[2])
{
	ReadInfo(Persons[0]);
	ReadInfo(Persons[1]);
}


void PrintPersons(strInfo Persons[2])
{
	PrintInfo(Persons[0]);
	PrintInfo(Persons[1]);
}

int main()
{
	strInfo Persons[2];

	ReadPersons(Persons);
	PrintPersons(Persons);

	return 0;
}