#include <iostream>

using namespace std;

void main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "arr数组占用的内存空间：" << sizeof(arr) << endl;
	cout << "arr数组单个元素占用空间：" << sizeof(arr[0]) << endl;
	cout << "arr数组的元素个数：" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "arr数组的首地址：" << (int)arr << endl;
	cout << "arr数组第一元素的地址：" << (int)&arr[0] << endl;
	cout << "arr数组第二元素的地址：" << (int)&arr[1] << endl;
	cout << "arr数组最后元素的地址：" << (int)&arr[sizeof(arr) / sizeof(arr[0])] << endl;
}
