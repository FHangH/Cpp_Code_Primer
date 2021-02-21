#include <iostream>

using namespace std;

void swap(int* p1, int* p2) //将指针指向内存的值进行调换
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	//此时 &a &b 的地址没变，但地址内存的值变了
}

void main()
{
	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(&a, &b);

	cout << "swap a = " << a << endl;
	cout << "swap b = " << b << endl;
}