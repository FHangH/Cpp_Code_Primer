#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 1, 3, 2, 5, 4};
	int arrIndex = 0; //����һ��������Ԫ�ص��±�
	int arrEnd = sizeof(arr) / sizeof(arr[0]) - 1; //��������ĩԪ�ص��±�
	int arrTemp; //����һ����ʱ����Ԫ�ص��±�

	cout << "����ǰ: ";

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	while (arrIndex <= arrEnd) //����Ԫ���±� <= ĩԪ���±�ʱ��ִ��
	{
		//���������±�Ԫ�ص�ֵ
		arrTemp = arr[arrIndex];
		arr[arrIndex] = arr[arrEnd];
		arr[arrEnd] = arrTemp;

		//��Ԫ���±��1
		arrIndex++;
		//ĩԪ���±��1
		arrEnd--;
	}

	cout << "�����: ";

	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
}
