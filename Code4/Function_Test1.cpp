#include <iostream>

using namespace std;

void swap(int num1, int num2)
{
	cout << "ֵ����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "***************" << endl;

	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "ֵ���ݺ�" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "***************" << endl;
}

void main()
{
	int a = 10;
	int b = 20;

	cout << "����ִ��main�д���ǰ aֵ �� bֵ" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "***************" << endl;

	swap(a, b);

	cout << "���ִ��main�д��ݺ� aֵ �� bֵ" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
