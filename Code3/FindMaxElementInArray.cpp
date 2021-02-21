#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 100, 200, 500, 300, 999, 1000, 888888 };
	int maxEle = arr[0]; //默认将数组中第一个元素作为最大值，存入maxEle

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i + 1] > maxEle) //将后一位的元素与默认的元素值进行比较
		{
			maxEle = arr[i + 1]; //如果后一位大于前一位，将后一位的值作为默认值存入maxEle
		}
	}
	cout << "Max element is : " << maxEle << endl;
}
