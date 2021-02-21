#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 5, 6, 3, 0, 4, 1, 2, 9, 7, 8 };
	int arrtemp;

	cout << "排序前：";
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr[a] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++) //排序的论数 = 数组元素个数 - 1
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++) //每轮排序的次数 = 数组元素个数 - 排序的论数 -1
		{
			if (arr[j] > arr[j + 1]) //每排序一次，满足条件就执行一次互换位置
			{
				arrtemp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arrtemp;
			}
		}
	}

	cout << "排序后：";
	for (int b = 0; b < sizeof(arr) / sizeof(arr[0]); b++)
	{
		cout << arr[b] << " ";
	}
	cout << endl;
}
