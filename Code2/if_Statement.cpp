#include <iostream>

using namespace std;

void main()
{
	int enterValue;

	cout << "Please enter value : " << endl;
	cin >> enterValue;

	cout << "Your enter value is : " << enterValue << endl;

	if (enterValue >= 650)
	{
		cout << "You are so good !" << endl;
	}
	else
	{
		cout << "You can do it !" << endl;
	}
}
