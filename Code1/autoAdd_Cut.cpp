#include <iostream>

using namespace std;

void main()
{
	//ǰ��++ �� ǰ��--
	int i1 = 10;
	int j1;
	cout << "i1 = " << i1 << endl;

	j1 = ++i1 * 10;
	cout << "++i1 * 10 = " << j1 << endl;

	j1 = --i1 * 10;
	cout << "--i1 * 10 = " << j1 << endl;

	//����++ �� ����--
	int i2 = 10;
	int j2;
	cout << "i2 = " << i1 << endl;

	j2 = ++i2 * 10;
	cout << "++i2 * 10 = " << j2 << endl;

	j2 = --i2 * 10;
	cout << "--i2 * 10 = " << j2 << endl;

	//������ǰ�õ�����
	int a1 = 10;
	int b1 = ++a1 * 10; //a1��ʱ��+1Ϊ11
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	int a2 = 10;
	int b2 = a2++ * 10; //a2��ʱ��Ϊ10,b2�������a2+1 Ϊ11
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;
}