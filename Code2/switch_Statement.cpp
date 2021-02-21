#include <iostream>

using namespace std;

void main()
{
	int value;

	cout << "Enter int value : " << endl;
	cin >> value;

	switch (value)
	{
	case 10:
		cout << "Return S" << endl;
		break;
	case 9:
		cout << "Return A" << endl;
		break;
	case 8:
		cout << "Return A" << endl;
		break;
	case 7:
		cout << "Return B" << endl;
		break;
	case 6:
		cout << "Return B" << endl;
		break;
	case 5:
		cout << "Return C" << endl;
		break;
	case 4:
		cout << "Return C" << endl;
		break;
	default:
		cout << "Return D" << endl;
		break;
	}
}
