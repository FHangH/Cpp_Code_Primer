#include <iostream>

using namespace std;

void swap(int* p1, int* p2) //��ָ��ָ���ڴ��ֵ���е���
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	//��ʱ &a &b �ĵ�ַû�䣬����ַ�ڴ��ֵ����
}

void main()
{
	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(&a, &b);

	cout << "swap a = " << a << endl;
	cout << "swap b = " << b << endl;
}