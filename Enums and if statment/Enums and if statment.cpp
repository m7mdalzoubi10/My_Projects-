#include <iostream>
using namespace std;


enum enumScreenColor {Red=1, Blue=2, Green=3, Yello=4};

int main()
{
	cout << "Please choice the number of the color :" << endl;
	cout << "(1)Red \n";
	cout << "(2)Blue \n";
	cout << "(3)Green \n";
	cout << "(4)Yellow \n";
	cout << "**********************" << endl;

	int c;

	enumScreenColor Color;
	cin >> c;

	Color = (enumScreenColor) c;

	if (Color == enumScreenColor::Red) { system("color 4F"); }

	else if (Color == enumScreenColor::Blue) { system("color 1F"); }

	else if (Color == enumScreenColor::Green) { system("color 2F"); }

	else if (Color == enumScreenColor::Yello) { system("color 6F"); }

	else { system("color 4F"); };

	return 0;
}
