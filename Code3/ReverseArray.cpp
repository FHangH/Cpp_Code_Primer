#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 1, 3, 2, 5, 4};
	int arrIndex = 0; //定义一个数组首元素的下标
	int arrEnd = sizeof(arr) / sizeof(arr[0]) - 1; //定义数组末元素的下标
	int arrTemp; //定义一个临时数组元素的下标

	cout << "逆向前: ";

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	while (arrIndex <= arrEnd) //当首元素下标 <= 末元素下标时才执行
	{
		//互换两个下标元素的值
		arrTemp = arr[arrIndex];
		arr[arrIndex] = arr[arrEnd];
		arr[arrEnd] = arrTemp;

		//首元素下标加1
		arrIndex++;
		//末元素下标减1
		arrEnd--;
	}

	cout << "逆向后: ";

	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
}
