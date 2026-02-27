#include <iostream>
using namespace std;

int array1[10] = {10,20,30,40,50,60,70,80,90,100};

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		cout << i << endl;

		if (array1[i] == 50)
		{
			cout << " The number 50 is found in " << i+1 << endl;
			break; //break the loop and dont countine to the end if we found the answer
		}
	}


	for (int x = 0; x <= 5; x++)
	{

		if (x == 3)
		{
			continue;   //ignores the comander the below and go for the (for loop) and will not post x
		}

		cout << x << endl;
	}

	return 0;
}

