#include <iostream>

using namespace std;

void main()
{
	int* p = (int*)0x1100;
	cout << *p << endl; //打印指针指向的内存值无效
} 