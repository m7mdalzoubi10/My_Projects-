#include <iostream>
using namespace std;

int main()
{
    int x = 3, sum = 0;
    float Grade[3];
    
    cout << "Please enter first grade : ";
    cin >> Grade[0];

    cout << "Please enter second grade : ";
    cin >> Grade[1];

    cout << "Please enter third grade : ";
    cin >> Grade[2];

    sum = Grade[0] + Grade[1] + Grade[2];

    cout << "Your average grade is : " << sum / x;

    return 0;
}