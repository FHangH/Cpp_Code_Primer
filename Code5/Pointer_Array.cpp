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
		cout << p << endl; //ÿ�α������ڴ��ַ
		p++;//*p ��ָ��ָ���ڴ�ռ��ֵ��p ���ڴ��ַ��p++ �ڴ��ַ�����8����λ��64λ��4����λ��32λ��
	}
}