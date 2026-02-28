#include <iostream>
#include <string>

using namespace std;


enum enPassExam { Pass=1, Fail=2 };

int ReadMark()
{
	int Mark;

	cout << "Please enter your Mark : ";
	cin >> Mark;

	return Mark;
}

enPassExam CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassExam::Pass;
	else
		return enPassExam::Fail;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enPassExam::Pass)
		cout << "***** You Passed *****" << endl;
	else
		cout << "****** You Failed *****" << endl;
}

int main()
{
	PrintResult(ReadMark());

	return 0;
}