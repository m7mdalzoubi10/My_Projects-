#include <iostream>

using namespace std;

void myFun(int num1)//&num1 means change num1 from every where
{
	 num1 = 500;

	cout << "In the function the num1 value is : " << num1 << endl;

}


int main()
{
	int num1;
	num1 = 100;

	myFun(num1);
	cout << "The num1 value in the local scope is : " << num1 <<endl;

	return 0;
}