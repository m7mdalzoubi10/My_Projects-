#include <iostream>
#include <string>
using namespace std;


void PrintName(string name)
{
	cout << "*****************\n"<<name<<"\n******************\n";
}


string EnterName()
{
	string Fullname;

	cout << "PLease enter your name :" << endl;
	getline(cin, Fullname);
	return Fullname;
}


int main()
{
	PrintName("Mohammed alzoubi");
	PrintName(EnterName());

	return 0;
}