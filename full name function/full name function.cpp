#include <iostream>
#include <string>
using namespace std;

struct stInfo //We do struct to use FistName and LastName because if there are so many options we dont forget
{
    string FirstName;
    string LastName;
}; //struct and class and enum ends with (;)


stInfo ReadInfo()
{
    stInfo Info; //object  1 and 2 ,3 etc....

    cout << "Please enter your first name: " << endl;
    cin >> Info.FirstName;

    cout << "Please enter your Last name: " << endl;
    cin >> Info.LastName;

    return Info;
}

//***********************************************************************************

string GetFullName(stInfo Info,bool Reversed)
{
    string FullName = "";

    if (Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else  
        FullName = Info.FirstName + " " + Info.LastName;

    return FullName;
}; 


void PrintFullName(string FullName)
{
    cout << "*******************************\n" << "Your full name is : " << FullName << "\n*******************************" << endl;
}


int main()
{
    PrintFullName(GetFullName(ReadInfo(),true));

    return 0;
} 