#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;

	cout << "arr[0] = " << arr[0] << endl;
	cout << "*p = " << *p << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *p << endl;
		cout << p << endl; //每次遍历的内存地址
		p++;//*p 是指针指向内存空间的值，p 是内存地址，p++ 内存地址向后移8个单位（64位）4个单位（32位）
	}
}