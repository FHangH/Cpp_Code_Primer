#include <iostream>

using namespace std;

void main()
{
	int arr[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << "��ά����Ĵ�С��" << sizeof(arr) << endl;
	cout << "��ά����һ�еĴ�С��" << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ�صĴ�С��" << sizeof(arr[0][0]) << endl;
	cout << "��ά�����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά�����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "*************************" << endl;
	//��ַ
	cout << "��ά������׵�ַ��" << (int)arr << endl;
	cout << "��ά�����һ�еĵ�ַ��" << (int)&arr[0] << endl;
	cout << "��ά����ڶ��еĵ�ַ��" << (int)&arr[1] << endl;
	cout << "��ά�����һ��Ԫ�صĵ�ַ��" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�صĵ�ַ��" << (int)&arr[0][1] << endl;
}
