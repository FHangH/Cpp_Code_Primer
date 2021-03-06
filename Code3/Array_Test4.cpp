#include <iostream>

using namespace std;

void main()
{
	int arr[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << "二维数组的大小：" << sizeof(arr) << endl;
	cout << "二维数组一行的大小：" << sizeof(arr[0]) << endl;
	cout << "二维数组元素的大小：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "*************************" << endl;
	//地址
	cout << "二维数组的首地址：" << (int)arr << endl;
	cout << "二维数组第一行的地址：" << (int)&arr[0] << endl;
	cout << "二维数组第二行的地址：" << (int)&arr[1] << endl;
	cout << "二维数组第一个元素的地址：" << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素的地址：" << (int)&arr[0][1] << endl;
}
