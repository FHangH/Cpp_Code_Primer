#include <iostream>

using namespace std;

void main()
{
	//Ĭ���������ʾ6λ��Ч����
	float f1 = 3.1415926f;

	double d1 = 3.1415926;

	cout << "float f1 : " << f1 << endl;

	cout << "double d1 : " << d1 << endl;

	//ͳ��float��doubleռ�õĿռ�
	cout << "float size : " << sizeof(float) << endl;

	cout << "double size : " << sizeof(double) << endl;

	//��ѧ������

	//3e2 : 3 * 10 ^2
	float f2 = 3e2;
	cout << "float f2 : " << f2 << endl;

	//3e2 : 3 * 0.1 ^2
	float f3 = 3e-2;
	cout << "float f3 : " << f3 << endl;
}
