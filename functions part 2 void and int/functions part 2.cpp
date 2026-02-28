#include <iostream>
#include <string>

using namespace std;

 void myNumbers()
{
	int num1 , num2;

	cout << "Please enter a Number 1 : ";
	cin >> num1;
  
	cout << "Please enter a Number 2 : ";
	cin >> num2;

	cout << num1 + num2 << endl;
}

int mySumNum()
{
	int num1, num2;

	cout << "Please enter a Number 1 : ";
	cin >> num1;
	cout << "Please enter a Number 2 : ";
	cin >> num2;

	return num1 * num2;
}

int main()
{
	myNumbers(); // No cout needed because its void function to call
	cout<< mySumNum(); // cout writen because its integar function to call

	return 0;
}