#include <iostream>

using namespace std;

void main()
{
	for (int h = 1; h <= 9; h++) //行数
	{
		for (int v = 1; v <= h; v++) //列数，但不超过行数
		{
			cout << v << " * " << h << "	"; //结果为 列数*行数=
		}
		cout << endl;
	}
}
