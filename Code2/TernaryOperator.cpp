#include <iostream>

using namespace std;

void main()
{
	int a = 10, b = 20;
	int c;
	
	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	//��Ŀ��������ʽ���ص��� ���������Կ���ֱ����Ϊ��ֵ����ֵ��
	(a < b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
 }
