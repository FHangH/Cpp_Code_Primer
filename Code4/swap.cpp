#include "swap.h"

void swap(int a, int b)
{
	cout << "ת��ǰ��" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "******************" << endl;

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "ת����" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}