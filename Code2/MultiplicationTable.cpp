#include <iostream>

using namespace std;

void main()
{
	for (int h = 1; h <= 9; h++) //����
	{
		for (int v = 1; v <= h; v++) //������������������
		{
			cout << v << " * " << h << "	"; //���Ϊ ����*����=
		}
		cout << endl;
	}
}
