#include <iostream>

using namespace std;

void main()
{
	int a = 1;
	int b = 0;
	int c = 1;
	int d = 0;

	//�߼���
	cout << "!a = " << !a << endl;
	cout << "!!a = " << !!a << endl;

	//�߼���
	cout << "a && b = " << (a && b) << endl;
	cout << "a && c = " << (a && c) << endl;

	//�߼���
	cout << "a || b = " << (a || b) << endl;
	cout << "a || c = " << (a || c) << endl;
	cout << "b || d = " << (b || d) << endl;
}