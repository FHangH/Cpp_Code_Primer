#include <iostream>

using namespace std;

void main()
{
	int value;

	cout << "Please enter value : " << endl;
	cin >> value;

	cout << "Your enter value is : " << value << endl;

	if (value >= 650)
	{
		if (value >= 750)
		{
			cout << "You are S !" << endl;
		}
		else
		{
			cout << "You are A !" << endl;
		}
	}
	else if (value >= 450)
	{
		cout << "You are C !" << endl;
	}
	else
	{
		cout << "You are D !" << endl;
	}
}
