#include <iostream>

using namespace std;

void main()
{
	//1. �������� ������[���鳤��];
	cout << "�������� ������[���鳤��]" << endl;

	int arr1[3];
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	
	for (int i = 0; i < 3; i++)
	{
		cout << arr1[i] << "  ";
	}
	cout << endl;

	//2. �������� ������[���鳤��] = {Ԫ��1��Ԫ��2��.....};
	cout << "�������� ������[���鳤��] = {Ԫ��1��Ԫ��2��.....}" << endl;

	int arr2[3] = { 1, 2, 4 };
	
	for (int j = 0; j < 3; j++)
	{
		cout << arr2[j] << "  ";
	}
	cout << endl;

	//3. �������� ������[] = {Ԫ��1��Ԫ��2��.....};
	cout << "�������� ������[] = {Ԫ��1��Ԫ��2��.....}" << endl;

	int arr3[] = {1, 2, 3};

	for (int k = 0; k < 3; k++)
	{
		cout << arr1[k] << "  ";
	}
	cout << endl;
}
