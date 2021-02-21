#include <iostream>

using namespace std;

void main()
{
	int num[3][3] =
	{
		{100, 100, 100},
		{80, 70, 60},
		{10, 100, 90}
	};
	string name[] = {"A", "B", "C"};

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += num[i][j];
		}
		cout << name[i] << " = " << sum << endl;
	}
}
