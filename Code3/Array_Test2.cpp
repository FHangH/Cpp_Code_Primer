#include <iostream>

using namespace std;

void main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "arr����ռ�õ��ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "arr���鵥��Ԫ��ռ�ÿռ䣺" << sizeof(arr[0]) << endl;
	cout << "arr�����Ԫ�ظ�����" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "arr������׵�ַ��" << (int)arr << endl;
	cout << "arr�����һԪ�صĵ�ַ��" << (int)&arr[0] << endl;
	cout << "arr����ڶ�Ԫ�صĵ�ַ��" << (int)&arr[1] << endl;
	cout << "arr�������Ԫ�صĵ�ַ��" << (int)&arr[sizeof(arr) / sizeof(arr[0])] << endl;
}
