#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 5, 6, 3, 0, 4, 1, 2, 9, 7, 8 };
	int arrtemp;

	cout << "����ǰ��";
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr[a] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++) //��������� = ����Ԫ�ظ��� - 1
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++) //ÿ������Ĵ��� = ����Ԫ�ظ��� - ��������� -1
		{
			if (arr[j] > arr[j + 1]) //ÿ����һ�Σ�����������ִ��һ�λ���λ��
			{
				arrtemp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arrtemp;
			}
		}
	}

	cout << "�����";
	for (int b = 0; b < sizeof(arr) / sizeof(arr[0]); b++)
	{
		cout << arr[b] << " ";
	}
	cout << endl;
}
