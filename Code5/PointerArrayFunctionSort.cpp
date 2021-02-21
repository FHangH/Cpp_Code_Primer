#include <iostream>

using namespace std;

void upSort(int* arrIndex, int arrlength)
{
	for (int i = 0; i < arrlength - 1; i++)
	{
		for (int j = 0; j < arrlength - i - 1; j++)
		{
			if (arrIndex[j] > arrIndex[j + 1])
			{
				int temp = arrIndex[j];
				arrIndex[j] = arrIndex[j + 1];
				arrIndex[j + 1] = temp;
			}
		}
	}
}

void printArray(int* arrIndex, int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arrIndex[i] << " ";
	}
	cout << endl;
}

void main()
{
	int arr[] = {4, 3, 2, 1, 8, 6, 9, 5, 7, 0};
	int arrLength = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, arrLength);
	upSort(arr, arrLength);
	printArray(arr, arrLength);
}