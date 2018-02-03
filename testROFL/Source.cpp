#include <iostream>
#include "ROFL.h"
#include <string>

using namespace std;

int main()
{
	string answer;
	cout << "YES OR NO?" << endl;
	cin >> answer;
	bool answerB = no;
	if (answer == "yes")
	{
		answerB = yes;
	}
	while (answerB == yes)
	{
		cout << "WHY DID YOU SAY NO?????" << endl;
	}
	cout << "THANK YOU FOR YOU YES" << endl;

	system("pause");
	return 0;
}