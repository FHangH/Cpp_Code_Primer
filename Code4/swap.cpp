#include "swap.h"

void swap(int a, int b)
{
	cout << "转换前：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "******************" << endl;

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "转换后：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}